// RoomCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "RoomCalc.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <locale>


float calcWallPaint(std::vector<float> wallsize) {
	float wallheight;
	float totalwallarea = 0;

	std::cout << "Enter Height of walls in meters. " << std::endl;
	std::cin >> wallheight;

	for (size_t i = 0; i < wallsize.size(); i++)
	{
		totalwallarea += wallsize[i] * wallheight;
	}

	return totalwallarea * 2;
}

float calcRoomVolume(std::vector<float> wallsize, int wallheight) {
	float roomvolume = (wallsize[0] * wallsize[1]) * wallheight;
	return roomvolume;
}

int main()
{
	int walls;
	float height;
	float width;
	float area;
	const float PI = 3.142f;
	std::vector<float> wallssize;
	bool getinput = true;

	float walllength = 0;
	getinput = true;
	while (getinput == true)
	{
		std::cout << "Enter the Length of the room" << std::endl;
		std::cin >> walllength;

		if (std::cin)
		{
			getinput = false;
		}
		else {
			std::cout << "Please enter a number." << std::endl;
		}
	}
	wallssize.push_back(walllength);
	walllength = 0;
	getinput = true;
	while (getinput == true)
	{
		std::cout << "Enter the Width of the room" << std::endl;
		std::cin >> walllength;

		if (std::cin)
		{
			getinput = false;
		}
		else {
			std::cout << "Please enter a number." << std::endl;
		}
	}
	wallssize.push_back(walllength);
	area = wallssize[0] * wallssize[1];
	std::cout << "The area of the room is: " << area << " metres squared" << std::endl;
	float requiredPaint = 0;
	requiredPaint = calcWallPaint(wallssize);
	std::cout << "The required amount of paint for this room is: " << requiredPaint << " square metres or " << requiredPaint / 14 << " litres" << std::endl;
}

