#include "Kitchen.h"

void Kitchen::AddCook(Employee cook)
{
	Cooks.push_back(cook);
}

Product Kitchen::PrepareDish(Product product, Employee cook)
{
	//you can add a schedule of chefs
	
	//different dishes
	it = Cooks.begin();
	if (product.GetName() == "potato")
	{
		Product dish( "fried potatoes", 30, 50);
		return dish;
	}
	//
}
