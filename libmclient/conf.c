/*
 * do not edit this file, as it was automatically generated by the `confused' program!
 * instead edit the source file 'conf.cf' then re-create this file using `confused'.
 */

#include "conf.h"

struct conf conf =
{
	"@$configDir@$"
};

struct confused_idx con_idx[] =
{
	{"configDir", cf_string, (void *)&conf.configDir},
	{NULL, cf_none, NULL}
};
