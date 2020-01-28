#ifndef TOWNS_CMD_IS_INCLUDED
#define TOWNS_CMD_IS_INCLUDED
/* { */

#include <vector>
#include <string>
#include <unordered_map>

class TownsCommandInterpreter
{
private:
	std::unordered_map <std::string,unsigned int> primaryCmdMap;
	std::unordered_map <std::string,unsigned int> featureMap;
	std::unordered_map <std::string,unsigned int> printableMap;

public:
	enum
	{
		CMD_NONE,

		CMD_HELP,

		CMD_RUN,
		CMD_RETURN_FROM_PROCEDURE,

		CMD_ENABLE,
		CMD_DISABLE,
		// ENABLE CMDLOG
		// DISABLE CMDLOG

		CMD_PRINT,

		CMD_ADD_BREAKPOINT,
		CMD_DELETE_BREAKPOINT,
		CMD_CLEAR_BREAKPOINT,
	};

	enum
	{
		ENABLE_NONE,
		ENABLE_CMDLOG,
		ENABLE_DISASSEMBLE_EVERY_INST,
	};

	enum
	{
		PRINT_NONE,
		PRINT_CALLSTACK,
		PRINT_BREAKPOINT,
	};


	class Command
	{
	public:
		std::string cmdline;
		std::vector <std::string> argv;
		int primaryCmd;
	};

	TownsCommandInterpreter();

	void PrintHelp(void) const;

	Command Interpret(const std::string &cmdline) const;
};


/* } */
#endif
