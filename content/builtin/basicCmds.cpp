#include <string>
#include <vector>

#include "src/command/command.hpp"

using namespace std;

Command move;
move.name = "move";
move.action = [](vector<string> args)->void 
{

};

CommandRegistry builtInRegistry()