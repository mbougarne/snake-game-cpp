#include <iostream>

bool isGameOver;
void setUp();
void draw();
void input();
void logic();

int main() {

	setUp();

	while (!isGameOver) {
		draw();
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