#include "shell.h"

/**
 * _defaultHelp - print help when any command found
 * @prmCommand: command name
 */

void _defaultHelp(char *prmCommand)
{
	_puts("bash: help: No help topic matches \"");
	_puts(prmCommand);
	_puts("\". Try \"help help\", \"man -k ");
	_puts(prmCommand);
	_puts("\" or \"info ");
	_puts(prmCommand);
	_puts("\".\n");
}
