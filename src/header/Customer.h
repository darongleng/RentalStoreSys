#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"
#include "Action.h"
#include <vector>

namespace css343_group4
{
	class Customer : public Person
	{
	public:
		//Constructors/Deconstructor
		Customer();
		~Customer();

		//Customer history
		void printHistory() const;
		bool addHistory(const std::string);
	private:
		int id;
		std::vector<Action> history;
	};
}

#endif
