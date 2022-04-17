#ifdef __FreeBSD__
#include <sys/socket.h>
#endif
#include <arpa/inet.h>
#include <netinet/in.h>

#include <cassert>
#include <cstdint>
#include <iostream>

int main() {
  in_addr net, broadcast;
  int bits = inet_net_pton(AF_INET, "192.168.192.10", &net, sizeof(net));
  assert((bits != -1));  // assert that inet_net_pton understood us
  // Apply CIDR mask to address to get the network
  if (bits > 0) {  // u32 << 32 is undefined
    uint32_t mask = htonl((0xFFFFFFFFu) << (32 - bits));
    net.s_addr &= mask;
  }
  broadcast = net;
  // Do the same for broadcast
  if (bits < 32) {
    uint32_t mask = htonl((0xFFFFFFFFu) >> bits);
    broadcast.s_addr |= mask;
  }
  std::cout << "Network: " << inet_ntoa(net) << std::endl;
  std::cout << "Broadcast: " << inet_ntoa(broadcast) << std::endl;
}