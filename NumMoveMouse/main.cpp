#include <iostream>
#include <stdio.h>
#include <window.h>
using namespace std;

bool activate = false;

int spd, refresh_rate;

void moveMouse(float dx, float dy) {
    INPUT input = {0};
    input.type = INPUT_MOUSE;
    input.mi.dx = static_cast<LONG>(dx);
    input.mi.dy = static_cast<LONG>(dy);
    input.mi.dwFlags = MOUSEEVENTF_MOVE; // Relative move
    SendInput(1, &input, sizeof(INPUT));
}

int main(){

    refresh_rate = 75;
    
    while (true){
        if (GetKeyState(VK_NUMPAD4) & 0x8000) {moveMouse(-spd, 0);} // left
        if (GetKeyState(VK_NUMPAD6) & 0x8000) {moveMouse(spd, 0);}  // right
        if (GetKeyState(VK_NUMPAD8) & 0x8000) {moveMouse(0, -spd);} // up
        if (GetKeyState(VK_NUMPAD5) & 0x8000) {moveMouse(0, spd);}  // down
        
        if (GetKeyState('T') & 0x8000) {return 0;} // end program

        sleep(1000/refresh_rate) // make it slower
        
    }
}
