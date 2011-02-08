#include "mustdie.cpp"
int runhellobox();
int CDECL MessageBoxPrintf (TCHAR * szCaption, TCHAR * szFormat, ...);
void debugmsg(char * s, int level);
int configreader(FILE *& logfile, char * fname);
int _start(HINSTANCE hInstance, HINSTANCE, PSTR szCmdLine, int iCmdShow){
	FILE * ferr = fopen("log.txt", "wt");
	if (configreader(ferr, "settings.cfg")) return 1;
	while (1){
	     int cxScreen, cyScreen ;

		if (runhellobox() != IDOK) return 0;
		else debugmsg("_start: user answered ok", 5);

	     cxScreen = GetSystemMetrics (SM_CXSCREEN) ;
	     cyScreen = GetSystemMetrics (SM_CYSCREEN) ;
	     MessageBoxPrintf (TEXT ("ScrnSize"), 
		               TEXT ("The screen is %i pixels wide by %i pixels high."),
		               imin(cxScreen, cyScreen), imax(cyScreen, cxScreen)) ;
	}
     return 0 ;
}


