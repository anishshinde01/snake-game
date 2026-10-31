#include "raylib.h"

struct Position {
    int x;
    int y;
};

int main() {
    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;
    constexpr int cellSize = 25;
    Position snake = {5, 10};

    InitWindow(screenWidth, screenHeight, "Snake");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        if (IsKeyPressed(KEY_RIGHT)) {
            snake.x++;
        } else if (IsKeyPressed(KEY_LEFT)) {
            snake.x--;
        } else if (IsKeyPressed(KEY_UP)) {
            snake.y--;
        } else if (IsKeyPressed(KEY_DOWN)) {
            snake.y++;
        }

        BeginDrawing();
        ClearBackground(BLACK);

        DrawRectangle(
            snake.x * cellSize,
            snake.y * cellSize,
            cellSize,
            cellSize,
            GREEN
        );

        EndDrawing();
    }

    CloseWindow();
    return 0;
}