#pragma once
#include "Kitchen.h"
#include "Booking.h"
#include <vector>
class Restaurant
{
public:
	void ServeOfCustomer(Product dish, Human human, Booking id);
	int GetScore(Booking id, Human human);
private:
	vector<int> Score;
	int ID;
	Product Dish;
};

