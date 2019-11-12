#pragma once

#include <string>
#include <functional>
#include <vector>

struct Command
{
    Command(std::string name_, std::vector<std::string> synonyms_, std::function<void(std::vector<std::string> args)> action_)
        : name(name_),
        synonyms(synonyms_),
        action(action_)
    {

    }

    std::string name;
    std::vector<std::string> synonyms;
    std::function<void(std::vector<std::string> args)> action;
};

class CommandRegistry
{
public:
    CommandRegistry(std::vector<Command>& commands_)
        : commands(commands_)
        {

        }

    void registerCommand(const Command& command);

    bool commandByNameExists(const std::string& name);

    Command& getCommand(const std::string& name);

private:
    std::vector<Command> commands;

};