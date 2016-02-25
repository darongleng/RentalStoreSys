#ifndef PERSON_H
#define PERSON_H

#include <iostream>

namespace css343_group4
{
	class Person
	{
	public:
		Person(std::string = "", std::string = "");
		~Person();
		std::string getFirstName() const;
		std::string getLastName() const;
		int hashCode();
	private:
		std::string firstName;
		std::string lastName;
	};
}

#endif