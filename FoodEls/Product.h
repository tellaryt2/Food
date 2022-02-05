#pragma once

#include <string>

using namespace std;

class Product
{
private:
	int Weight;
	int Price;
	string Name;
public:
	Product(string name, int weight, int price);
	Product();
	string GetName();
	int GetWeight();
	int GetPrice();
	void SetName(string name);
	void SetWeight(int weight);
	void SetPrice(int price);
};