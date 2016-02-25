#ifndef MOVIESTORE_H
#define MOVIESTORE_H

#include <iostream>
#include <hash_set>


namespace css343_group4
{
	class MovieStore
	{
	public:
		//Constructors/Destructor
		MovieStore();
		~MovieStore();

		//Parsers?  <---Possibly not needed
		bool readCustomers(std::ifstream&);
		bool readMovies(std::ifstream&);
		bool readCommands(std::ifstream&);
	private:
		//HashTable<Customer> customers;	TODO: Add Person heirarchy
		//InventorySystem* invSys;			TODO: Add Inventory System
	};
}

#endif
