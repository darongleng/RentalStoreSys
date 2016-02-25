#ifndef INVENTORYSYSTEM_H
#define INVENTORYSYSTEM_H

#include <iostream>
#include "Movie.h"

namespace css343_group4
{
	class InventorySystem
	{
	public:
		InventorySystem();
		~InventorySystem();

		void print() const;
		bool add(std::ifstream&);
		bool incrementStock(Movie);
		bool decrementStock(Movie);
	private:
		//BinaryTree<Movie> movies[];	<----  TODO: Template Binary Tree class
	};
}

#endif