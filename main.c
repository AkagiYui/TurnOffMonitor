#include <windows.h>
#include <winuser.h>

const LPARAM MONITOR_ON = -1;
const LPARAM MONITOR_OFF = 2;
const LPARAM MONITOR_STANDBY = 1;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    LPARAM action = MONITOR_OFF;
    if (lpCmdLine[0] == '1') {
        action = MONITOR_ON;
    } else if (lpCmdLine[0] == '2') {
        action = MONITOR_STANDBY;
    }
    SendNotifyMessage(HWND_BROADCAST , WM_SYSCOMMAND, SC_MONITORPOWER, action);
    return 0;
}
