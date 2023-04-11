#ifndef CONSTANTS_HPP_INCLUDE
#define CONSTANTS_HPP_INCLUDE

#include <cstdint>
#include <string>

namespace consts {

// header
constexpr uint32_t HEADER_LENGTH = 2;

// client
constexpr double TRAFFIC_GENERATION_TIME_INTERVAL = 0.1;
constexpr uint16_t CLIENT_PORT = 1102;

// master
constexpr uint16_t MASTER_PORT = 1102;

// network
const std::string SSID = "ns-3-ssid";
const char* BASE_ADDRESS = "10.1.3.0";
const char* NET_MASK = "255.255.255.0";

// simulation
constexpr double ERROR = 0.000001;
constexpr double DURATION = 60.0;
constexpr double MONITOR_TIME_INTERVAL = 10.0;
constexpr bool VERBOSE_DEFAULT = true;
constexpr bool TRACING_DEFAULT = false;

} // namespace consts

#endif // CONSTANTS_HPP_INCLUDE
