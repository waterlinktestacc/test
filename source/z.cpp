#include <cstdio>

struct config_t{
	int debug_level;
} config;

/* 
 * 		debug levels:
 *			0	critical errors
 *			1	errors
 *			2	warnings
 *			3	debug
 *			4	verbose
 *			5	ultra-verbose
 */

void debugmsg(char * s, int level){
	printf("debug message with level %d: %s\n", level, s);
}

void configreader(char * fname){
	FILE * fconfig = fopen(fname, "rt");
	if (!fconfig){
		freopen(fname, "wt", fconfig);
		fprintf(fconfig, "1\n");
		config.debug_level = 2;
		fflush(fconfig);
		fclose(fconfig);
		debugmsg("configreader: warning: no config file, creating default config file", 2);
		return;
	}
	fscanf(fconfig, "%d", &(config.debug_level));
	fclose(fconfig);
}
