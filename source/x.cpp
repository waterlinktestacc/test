#include "mustdie.h"
void runhellobox();
int CDECL MessageBoxPrintf (TCHAR * szCaption, TCHAR * szFormat, ...);
int _start(HINSTANCE hInstance, HINSTANCE, PSTR szCmdLine, int iCmdShow){
     int cxScreen, cyScreen ;

     cxScreen = GetSystemMetrics (SM_CXSCREEN) ;
     cyScreen = GetSystemMetrics (SM_CYSCREEN) ;
     MessageBoxPrintf (TEXT ("ScrnSize"), 
                       TEXT ("The screen is %i pixels wide by %i pixels high."),
                       cxScreen, cyScreen) ;
     return 0 ;
}


