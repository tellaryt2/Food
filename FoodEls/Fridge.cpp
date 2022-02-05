#include "Fridge.h"

Fridge::Fridge()
{			
}


void Fridge::PutProduct(Product product)
{
	Storage.push_back(product);
}

Product Fridge::TakeProduct(string name)
{
	for (auto i = Storage.begin(); i != Storage.end(); i++)
	{
		if (i->GetName() == name)
		{
			it = i;
			Product temp = *it;
			Storage.erase(it);
			return temp;
		}
	}
	Product null("there is no such product", 0, 0);
	return null;
}
