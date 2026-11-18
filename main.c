# main
#include <raylib.h>
#include <stdio.h>
#include "engine.c"

int main(void){
SetTraceLogLevel(LOG_NONE);
SetConfigFlags(FLAG_FULLSCREEN_MODE);
InitWindow(0,0,"oncha");
SetExitKey(KEY_NULL);
const int SH = GetScreenHeight();
const int SW = GetScreenWidth();
SetWindowSize(SW,SH);

while(!WindowShouldClose()){
BeginDrawing();
ClearBackground(RAYWHITE);
EndDrawing();
}
return 0;
}
