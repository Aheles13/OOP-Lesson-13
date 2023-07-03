#pragma once

#include <iostream>
#include <string>



class Plant
{
private:
	std::string _name;
	std::string _color;
	int _mass;

public:
	Plant(std::string name, std::string color, int mass)
	{
		_name = name;
		_color = color;
		_mass = mass;
	}

};