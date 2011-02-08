#include <cstdio>

void debugmsg(char * s, int level);

struct config_t{
	int debug_level;
	FILE * logfile;
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

int configreader(FILE *& logfile, char * fname){
	config.logfile = logfile;
	FILE * fconfig;
	fconfig = fopen(fname, "rt");
	if (!fconfig){
		fconfig = fopen(fname, "wt");
		if (!fconfig){
			printf("CRITICAL: can't access config file %s (non for r, non fo w)\n", fname);
			return 1;
		}
		fprintf(fconfig, "1\n");
		config.debug_level = 2;
		fflush(fconfig);
		fclose(fconfig);
		debugmsg("configreader: warning: no config file, creating default config file", 2);
		return 0;
	}
	fscanf(fconfig, "%d", &(config.debug_level));
	fclose(fconfig);
	return 0;
}

void debugmsg(char * s, int level){
	if (config.debug_level >= level)
		fprintf(config.logfile, "debug %d: %s\n", level, s);
}

