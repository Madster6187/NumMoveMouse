#include <iostream>
#include <stdio.h>
#include <window.h>
using namespace std;

bool numlock_activate = false;

void moveMouse(int x, int y){
    INPUT input = { 0 };
    input.type = INPUT_MOUSE;
    input.mi.dx = (x * 65535) / GetSystemMetrics(SM_CXSCREEN);
    input.mi.dy = (y * 65535) / GetSystemMetrics(SM_CYSCREEN);
    input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;
    SendInput(1, &input, sizeof(INPUT));
    
}

int main(){

    while (true){
        
        
    }
}
