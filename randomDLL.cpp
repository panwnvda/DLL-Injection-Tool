#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hModule, DWORD Reason, LPVOID lpvReserved) {
    switch (Reason) {
        case DLL_PROCESS_ATTACH:
            MessageBoxW(NULL, L"KAW KAW KAW", L"WHO GOES THERE", MB_ICONQUESTION | MB_OK);
            break;
    }

    return TRUE;
}
