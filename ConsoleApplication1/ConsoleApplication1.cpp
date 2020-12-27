#include <iostream>
#include <conio.h>

enum class Directions {
	STOP,
	LEFT,
	RIGHT,
	UP,
	DOWN
};

Directions dir;
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
	dir = Directions::STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

void draw() {
	system("cls"); // for Unix like sys: clear

	for (int i = 0; i < width; i++)
	{
		std::cout << "*";
	}

	std::cout << std::endl;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
			{
				std::cout << "*";
			}

			if (i == y && j == x)
			{
				std::cout << "O";
			}
			else if (i == fruitY && j == fruitX) {
				std::cout << "F";
			}
			else {
				std::cout << " ";
			}


			if (j == width - 1)
			{
				std::cout << "*";
			}
		}

		std::cout << std::endl;
	}

	for (int i = 0; i < width; i++)
	{
		std::cout << "*";
	}

	std::cout << std::endl;
}

void input() {
	if (_kbhit()) {
		switch (_getch()) {
			case 'a':
				dir = Directions::LEFT;
				break;
			case 'd':
				dir = Directions::RIGHT;
				break;
			case 'w':
				dir = Directions::UP;
				break;
			case 's':
				dir = Directions::DOWN;
				break;
			case 'x':
				dir = Directions::STOP;
				isGameOver = true;
				break;
		}
	}
}

void logic() {

}