#pragma once
#include <string>
#include <iostream>
class person
{
public:
	person();
	person(std::string, int, int, int);
	~person();
	int age;
	std::string name;
	int weight;
	int height;

	void displayCharas() const;

};

