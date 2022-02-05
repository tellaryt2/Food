#pragma once

#include "Product.h"
#include "Employee.h"
#include "list"

class Kitchen
{
public:

	void AddCook(Employee cook);
	Product PrepareDish(Product product, Employee cook);

private:

	list<Employee> Cooks;
	list<Employee>::iterator it = Cooks.begin();
};
