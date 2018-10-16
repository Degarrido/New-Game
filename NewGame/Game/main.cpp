#include <iostream>
#include "raylib.h"
using namespace std;

int main() {
	int screenWidth = 800;
	int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "SideScroller");

	int playerPosition = screenHeight / 2 - 200 ;
	int scrollSpeed = 10;

	SetTargetFPS(60);

	while (!WindowShouldClose()) {

		if (IsKeyDown(KEY_UP)) playerPosition -= scrollSpeed;
		if (IsKeyDown(KEY_DOWN)) playerPosition += scrollSpeed;

		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawRectangle(screenWidth / 2 - 200, playerPosition, 80, 80, BLUE);
		EndDrawing();
	}

	CloseWindow();

	return 0;
}