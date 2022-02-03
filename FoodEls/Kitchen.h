#pragma once

#include "Product.h"
#include "Employee.h"

class Kitchen
{
public:
	void PrepareDish(Product product, Employee cook)
	{
		this->Cook = cook;
		//
	}
private:
	Employee Cook;
};
