#include "Booking.h"

Booking::Booking(Human human)
{
	ListOfClients.push_back(human.GetFio());
}

int Booking::GetID(Human human)
{
	int ID = 1;
	for (auto i = ListOfClients.begin(); i != ListOfClients.end(); i++)
	{
		Order = i;
		if (*Order == human.GetFio())
		{
			return ID;
		}
		ID++;
	}
}
