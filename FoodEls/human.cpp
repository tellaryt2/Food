#include <iostream>
#include <string>

using namespace std;


class Human
{
private:
	string Fio;
	string Sex;

};


class Product
{
private:
	int Weight;
	int Price;
	int Calories;
	string Name;
};


class Employee : public Human 
{
private:
	string Passport;
};


class TypeBooking : public Human
{
private:
	string NumberOrder;
};


class Booking : public TypeBooking
{
public:
	int GetID(TypeBooking order, Human human)
	{

	}
private:
	int ID;
};


class Online : public TypeBooking
{
private:
	string URL;
};


class Ofline : public TypeBooking
{
private:
	string Adress;
	Employee Waiter;
};


class Fridge : public Product
{
public:
	void PutProduct(Product product)
	{

	}

	void TakeProduct(Product product)
	{

	}
};


class Kitchen : public Fridge, Employee
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


class Restaurant : public Kitchen, Booking
{
public:
	void ServeOfCustomer(Kitchen dish, Kitchen cook, Booking id)
	{

	}
private:
	string Score;
};


class Pay : public TypeBooking
{
public:
	void PayOrder(TypeBooking order)
	{

	}

	void PayScore(Restaurant score)
	{

	}
};


int main()
{

	return 0;
}
