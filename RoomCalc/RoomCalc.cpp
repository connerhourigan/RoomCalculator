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

int main()
{
	int walls;
	float height;
	float width;
	float area;
	const float PI = 3.142f;
	std::vector<float> wallssize;
	bool getinput;



	
	while (getinput = true)
	{
		std::cout << "Enter number of walls.";
		std::cin >> walls;

		if (std::cin)
		{
			getinput = false;
		}
		else {
			std::cout << "Please enter a number.";
		}
	}
	

	if (walls == 1)
	{
		float walllength = 0;

		while (getinput = true)
		{
			std::cout << "Enter the Lenght of the wall";
			std::cin >> walllength;

			if (std::cin)
			{
				getinput = false;
			}
			else {
				std::cout << "Please enter a number.";
			}
		}
		wallssize.push_back(walllength);
		area = PI * wallssize[0];
		std::cout << "The area of the room is: " << area << std::endl;
		float requiredPaint = 0;
		requiredPaint = calcWallPaint(wallssize);
		std::cout << "The required amount of paint for this room is: " << requiredPaint << std::endl;
	}
	else if (walls == 3) {
		for (size_t i = 0; i < 2; i++)
		{
			float walllength = 0;
			while (getinput = true)
			{
				std::cout << "Enter the Lenght of the wall";
				std::cin >> walllength;

				if (std::cin)
				{
					getinput = false;
				}
				else {
					std::cout << "Please enter a number.";
				}
			}
			wallssize.push_back(walllength);
		}
		area = 0.5f * wallssize[0] * wallssize[1];
		std::cout << "The area of the room is: " << area << std::endl;
		float requiredPaint = 0;
		requiredPaint = calcWallPaint(wallssize);
		std::cout << "The required amount of paint for this room is: " << requiredPaint << std::endl;
	}
	else if (walls == 4) {
		for (size_t i = 0; i < 2; i++)
		{
			float walllength = 0;
			while (getinput = true)
			{
				std::cout << "Enter the Lenght of the wall";
				std::cin >> walllength;

				if (std::cin)
				{
					getinput = false;
				}
				else {
					std::cout << "Please enter a number.";
				}
			}
			wallssize.push_back(walllength);
		}
		area = wallssize[0] * wallssize[1];
		std::cout << "The area of the room is: " << area << std::endl;
		float requiredPaint = 0;
		requiredPaint = calcWallPaint(wallssize);
		std::cout << "The required amount of paint for this room is: " << requiredPaint << std::endl;
	}
}

