#ifndef COMMAND_LINE_INTERFACE_HPP_INCLUDE
#define COMMAND_LINE_INTERFACE_HPP_INCLUDE

#include <functional>
#include <string>
#include <unordered_map>
#include <vector>

#include "network.hpp"

class CommandLineInterface {
public:
    CommandLineInterface(Network& network);
    ~CommandLineInterface() = default;

    void run();

private:
    Network& network_;
    std::unordered_map<std::string, std::function<std::string(const std::vector<std::string>&)>> commands_;

    std::string help(const std::vector<std::string>& args);
    std::string topology(const std::vector<std::string>& args);
    std::string show(const std::vector<std::string>& args);
    std::string modify(const std::vector<std::string>& args);
    std::string remove(const std::vector<std::string>& args);
    // std::string lsrp(const std::vector<std::string>& args);
    // std::string dvrp(const std::vector<std::string>& args);
};

#endif // COMMAND_LINE_INTERFACE_HPP_INCLUDE
