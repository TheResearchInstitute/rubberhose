/*
 * do not edit this file, as it was automatically generated by the `confused' program!
 * instead edit the source file 'conf.cf' then re-create this file using `confused'.
 */

#include <stdio.h>

#define bool int

enum cf_type {cf_string=0, cf_bool, cf_int, cf_time, cf_none};

struct confused_idx
{
	char *name;
	enum cf_type type;
	void *data;
};

struct conf
{	char * configDir;
};
extern struct conf conf;
extern struct confused_idx con_idx[];
extern char *confused(FILE *, char *, struct confused_idx *con_idx);
