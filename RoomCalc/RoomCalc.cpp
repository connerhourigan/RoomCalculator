// RoomCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "RoomCalc.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <locale>

// function to calculate the amount of paint to apply to the walls
float calcWallPaint(std::vector<float> wallsize) {
	float wallheight;
	float totalwallarea = 0;

	std::cout << "Enter Height of walls in meters. " << std::endl;
	std::cin >> wallheight;

	// iterate through the walls.
	for (size_t i = 0; i < wallsize.size(); i++)
	{
		totalwallarea += wallsize[i] * wallheight;
	}

	// multiple by 2 for the walls on the other side
	return totalwallarea * 2;
}

// function to calculate the volume of the room
float calcRoomVolume(std::vector<float> wallsize, int wallheight) {
	float roomvolume = (wallsize[0] * wallsize[1]) * wallheight;
	return roomvolume;
}

int main()
{
	// init variables including height width and area and create a vector for walls
	int walls;
	float height, width, area;
	std::vector<float> wallssize;
	bool getinput = true;
	float walllength = 0;

	// handle user input and error checking
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
	// calculate area
	area = wallssize[0] * wallssize[1];
	std::cout << "The area of the room is: " << area << " metres squared" << std::endl;
	float requiredPaint = 0;
	// call the calculate the amount of paint on the wall function
	requiredPaint = calcWallPaint(wallssize);
	// print the returned value and then divide the value by 14. value retrived from dulux website for conversion.
	std::cout << "The required amount of paint for this room is: " << requiredPaint << " square metres or " << requiredPaint / 14 << " litres" << std::endl;
	std::cin >> getinput;
}

