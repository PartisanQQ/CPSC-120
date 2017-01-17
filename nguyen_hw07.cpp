#include <iostream>
#include "Cuboid.h"
using namespace std;

Cuboid::Cuboid()
{
	width = 1;
	height = 1;
	depth = 1;
};

Cuboid::Cuboid(double in_cube)
{
	width = in_cube;
	height = in_cube;
	depth = in_cube;
};

Cuboid::Cuboid(double in_width, double in_height, double in_depth)
{
	width = in_width;
	height = in_height;
	depth = in_depth;
};

void Cuboid::setWidth(double in_width)
{
	width = in_width;
};

void Cuboid::setHeight(double in_height)
{
	height = in_height;
};

void Cuboid::setDepth(double in_depth)
{
	depth = in_depth;
};

bool Cuboid::isCube()
{
	if (width == depth && width == height)
	{
		return true;
	}
	else
	{
		return false;
	}
};

double Cuboid::calcVolume()
{
	return width * height * depth;
};