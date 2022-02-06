#include "Booking.h"

Booking::Booking(Human human)
{
	ListOfClients.push_back(human.GetFio());
	ID = 1;
}

int Booking::GetID(Human human)
{
	for (auto i = ListOfClients.begin(); i != ListOfClients.end(); i++)
	{
		ID = 1;
		Order = i;
		if (*Order == human.GetFio())
		{
			return ID;
		}
		ID++;
	}
	return 0;
}
