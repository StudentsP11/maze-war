#include <iostream>
//#include <conio.h>
//#include <windows.h>
#include <string>

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

enum Moving {
	down,
	up,
	right,
	left,


};

template <typename move_key>

int main() {


	switch (move_key)
	{
	case Moving::down:
		MoveDown(Entity &entity);
		break;

	case Moving::up:
		MoveUp(Entity & entity);
		break;

	case Moving::right:
		MoveRight(Entity & entity);
		break;

	case Moving::left:
		MoveLeft(Entity & entity);
		break;
	}


}



