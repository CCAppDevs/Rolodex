#include "Person.h"

// definitions

Person::Person()
{
	this->Age = 0;
	this->FirstName = "Base";
	this->LastName = "Person";
	this->Phone = "";
}

Person::Person(std::string first, std::string last, unsigned int age)
{
	this->Age = age;
	this->FirstName = first;
	this->LastName = last;
}

std::string Person::ToString()
{
	return "Name: " +
		this->FirstName +
		" " +
		this->LastName +
		" Age: " +
		std::to_string(this->Age) +
		" Phone: " +
		this->Phone;
}
