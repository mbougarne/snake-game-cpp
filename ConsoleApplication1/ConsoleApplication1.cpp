#include <iostream>

bool isGameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;

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
}

void draw() {

}

void input() {

}

void logic() {

}