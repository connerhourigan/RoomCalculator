// RoomCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <vector>


int main()
{
	int walls;
	float height;
	float width;
	float area;
	const float PI = 3.142;
	std::vector<float> wallssize;


	std::cout << "Enter number of walls.";
	std::cin >> walls;

	for (size_t i = 0; i < walls; i++)
	{
		std::cin >> wallssize[i];
	}

	if (walls == 1)
	{
		area = PI * wallssize[0];
		calcWallPaint(wallssize);
	}
	else if (walls == 3) {
		area = 0.5 * wallssize[0] * wallssize[1];
		calcWallPaint(wallssize);
	}
	else if (walls == 4) {
		area = wallssize[0] * wallssize[1];
		calcWallPaint(wallssize);
	}
}

float calcWallPaint(std::vector<float> wallsize) {
	float wallheight;
	float totalwallarea;

	std::cout << "Enter Height of walls.";
	std::cin >> wallheight;

	for (size_t i = 0; i < wallsize.size(); i++)
	{
		totalwallarea += wallsize[i] * wallheight;
	}

	return totalwallarea;
}

float calcRoomVolume(std::vector<float> wallsize, int wallheight) {
	float roomvolume = (wallsize[0] * wallsize[1]) * wallheight;
	return roomvolume;
}