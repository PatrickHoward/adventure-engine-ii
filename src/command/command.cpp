#include <string>
#include <functional>
#include <vector>

#include "command.hpp"

void CommandRegistry::registerCommand(const Command& command)
{
    commands.push_back(command);
}

bool CommandRegistry::commandByNameExists(const std::string& name)
{
    for(int i = 0; i < commands.size(); ++i)
    {
        if(commands[i].name == name)
        {
            return true;
        }
    }

    return false;
}

Command& CommandRegistry::getCommand(const std::string& name)
{
    if(commandByNameExists(name))
    {
        for(int i = 0; i < commands.size(); ++i)
        {
            if(commands[i].name == name)
            {
                return commands[i];
            }
        }
    }
}