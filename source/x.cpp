#include "mustdie.h"
int runhellobox();
int CDECL MessageBoxPrintf (TCHAR * szCaption, TCHAR * szFormat, ...);
void debugmsg(char * s, int level);
void configreader(char * fname);
int _start(HINSTANCE hInstance, HINSTANCE, PSTR szCmdLine, int iCmdShow){
	configreader("settings.cfg");
while (1){
     int cxScreen, cyScreen ;

	if (runhellobox() != IDOK) return 0;
	else debugmsg("_start: user answered ok", 5);

     cxScreen = GetSystemMetrics (SM_CXSCREEN) ;
     cyScreen = GetSystemMetrics (SM_CYSCREEN) ;
     MessageBoxPrintf (TEXT ("ScrnSize"), 
                       TEXT ("The screen is %i pixels wide by %i pixels high."),
                       cxScreen, cyScreen) ;
}
     return 0 ;
}


