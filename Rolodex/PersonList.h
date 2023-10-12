#pragma once
#include <vector>
#include "Person.h"

class PersonList
{
private:
	// vector of persons
	std::vector<Person> List;

public:

	PersonList();
	PersonList(std::vector<Person> list);
	
	// some way to read a person out
	Person GetPersonByName(std::string fname, std::string lname);

	// read all people
	std::vector<Person> GetAll();

	// some way to add a person
	void AddPerson(Person person);
	void AddPerson(std::string fname, std::string lname, std::string phone, unsigned int age);
	
	// update a person
	
	// delete a person



};

