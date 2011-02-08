#include <cstdio>
void debugmsg(char * s, int level){
	fprintf(stderr, "debug %d: %s\n", s, level);
}
