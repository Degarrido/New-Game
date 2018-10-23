#include <iostream>
#include "raylib.h"
using namespace std;

int main() {
	int screenWidth = 800;
	int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "SideScroller");
	Texture2D spaceShip = LoadTexture("res/SpaceShip.png");


	Rectangle frameRec = { 0.0f, 0.0f, (float)spaceShip.width / 6, spaceShip.height / 6 };
	Vector2 position = { 350.0f, 280.0f };

	int playerPosition = screenHeight / 2 - 200 ;
	int scrollSpeed = 10;

	SetTargetFPS(60);

	while (!WindowShouldClose()) {

		if (IsKeyDown(KEY_UP)) playerPosition -= scrollSpeed;
		if (IsKeyDown(KEY_DOWN)) playerPosition += scrollSpeed;

		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawTextureRec(spaceShip, frameRec, position, WHITE);
		DrawRectangle(screenWidth / 2 - 200, playerPosition, 80, 80, BLUE);
		EndDrawing();
	}

	UnloadTexture(spaceShip);
	CloseWindow();

	return 0;
}