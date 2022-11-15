#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
struct Point2D {
    int x; 
    int y;
};
struct Entity {
    Point2D Position;
};

void MoveLeft(Entity &entity) {
    entity.Position.x -= 1;

}


void MoveRight(Entity &entity) {
    entity.Position.x += 1;
}


void MoveUp(Entity &entity) {
    entity.Position.y += 1;

}


void MoveDown(Entity &entity) {
    entity.Position.y -= 1;

}


int main() {

}
