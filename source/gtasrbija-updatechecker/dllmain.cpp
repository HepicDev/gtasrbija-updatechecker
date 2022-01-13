#include "dllmain.h"
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved     )
{
    switch (ul_reason_for_call){ 
        case DLL_PROCESS_ATTACH:
            MessageBoxA(NULL, "HAI WORLD!", "Attach", NULL); 
            break; 
        case DLL_PROCESS_DETACH:   
            MessageBoxA(NULL, "THX, BYE", "Detach", NULL);  
            break; 
        case DLL_THREAD_ATTACH: 
        case DLL_THREAD_DETACH: 
            break;
    }
    return TRUE;
}
    

