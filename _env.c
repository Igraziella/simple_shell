#include "shell.h"


/**
 * _env - print environment variable
 * @prmData: data structure
 */

void _env(appData_t *prmData)
{
	_printenv(prmData->env);
}
