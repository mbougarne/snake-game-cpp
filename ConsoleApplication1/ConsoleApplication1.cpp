#include <iostream>

enum Directions {
	STOP,
	LEFT,
	RIGHT,
	UP,
	DOWN
};

Directions dir = STOP;
bool isGameOver;
const int width = 20;
const int height = 20;
double x, y, fruitX, fruitY, score;

void setUp();
void draw();
void input();
void logic();

int main() {

	setUp();

	while (!isGameOver) {
		draw();
		input();
		logic();
	}

	return 0;
}

void setUp() {
	isGameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

void draw() {

}

void input() {

}

void logic() {

}