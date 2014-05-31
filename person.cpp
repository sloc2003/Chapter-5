#include "person.h"


person::person()
{
	name = "Charlie";
	age = 10;
	weight = 45;
	height = 66;

	displayCharas();
}

person::person(std::string passName, int passAge, int passWeight, int passHeight)
{
	name = passName;
	age = passAge;
	weight = passWeight;
	height = passHeight;
	displayCharas();
}

void person::displayCharas() const{
	std::cout << name << " is " << age << " years old." << std::endl <<
		name << " weights " << weight << " pounds and is " << height <<
		" inches tall " << std::endl;
}

person::~person()
{
}
