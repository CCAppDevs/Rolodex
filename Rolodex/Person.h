#pragma once
#include <string>

// declarations

class Person
{
private:
	unsigned int Age = 0;

public:
	Person();
	Person(std::string first, std::string last, unsigned int age);

	// properties of a person (the stuff it knows)
	std::string FirstName;
	std::string LastName;
	std::string Phone;

	// TODO: birthdate and address go here

	// methods of a person (the stuff it can do)
	std::string ToString();

	// getters and setters
	unsigned int GetAge();
	void SetAge(unsigned int newAge);
};

