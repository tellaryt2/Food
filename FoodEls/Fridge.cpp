#include "Fridge.h"

Fridge::Fridge()
{			
}

void Fridge::PutProduct(Product product)
{
	Storage.push_back(product);
}

Product Fridge::TakeProduct(Product product)
{
	for (int i = 0; i < Storage.size(); i++)
	{
		for (auto i = Storage.begin(); i != Storage.end(); i++)
		{
			if (it->GetName() == product.GetName())
			{
				auto temp = it;
				Storage.erase(it);
				return *temp;
			}
		}
	}
}
