#include "Tool.h"

Tool::Tool(std::string name)
	:Item(name)
{
}

Tool::Tool(std::string name, int healAmt)
	:Item(name), _healAmt(healAmt)
{
}
