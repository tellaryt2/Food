#pragma once
#include "Product.h"
#include <list>

class Fridge
{
private:

	list<Product> Storage;
	list<Product>::iterator it = Storage.begin();

public:

	Fridge();

	void PutProduct(Product product);

	Product TakeProduct(Product product);
};