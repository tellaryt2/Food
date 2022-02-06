#include "Restaurant.h"

void Restaurant::ServeOfCustomer(Product dish, Human human, Booking id)
{
	Dish = dish;
	ID = id.GetID(human);
	Score[ID] = dish.GetPrice();
}

int Restaurant::GetScore(Booking id, Human human)
{
	for (int i = 1; i < Score.size(); i++)
	{
		ID = i;
		if (id.GetID(human) == ID)
		{
			return Score[ID];
		}
	}
	return 0;
}
