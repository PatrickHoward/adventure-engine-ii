#pragma once

#include <string>
#include <functional>
#include <vector>

struct Command
{
    std::string name;
    std::vector<std::string> synonyms;
    std::function<void(std::vector<std::string> args)> action;
};

class CommandRegistry
{
public:
    void registerCommand(const Command& command);

    bool commandByNameExists(const std::string& name);

    Command& getCommand(const std::string& name);

private:
    std::vector<Command> commands;

};