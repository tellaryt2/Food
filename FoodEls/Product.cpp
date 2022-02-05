#include "Product.h"

Product::Product(string name, int weight, int price)
{
	Name = name;
	Weight = weight;
	Price = price;
}

Product::Product()
{
	Name = "";
	Price = 0;
	Weight = 0;
}

string Product::GetName()
{
	return Name;
}

int Product::GetWeight()
{
	return Weight;
}

int Product::GetPrice()
{
	return Price;
}

void Product::SetName(string name)
{
	Name = name;
}

void Product::SetWeight(int weight)
{
	Weight = weight;
}

void Product::SetPrice(int price)
{
	Price = price;
}
