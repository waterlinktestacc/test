#include <cstdio>
void debugmsg(FILE *& ferr, char * s, int level){
	fprintf(ferr, "debug %d: %s\n", level, s);
}
