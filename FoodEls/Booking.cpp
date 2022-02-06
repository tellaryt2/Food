#include "Booking.h"

Booking::Booking(Human human)
{
	ListOfClients.push_back(human.GetFio());
	ID = 1;
}

int Booking::GetID(Human human)
{
	ID = 1;
	for (auto i = ListOfClients.begin(); i != ListOfClients.end(); i++)
	{
		Order = i;
		if (*Order == human.GetFio())
		{
			return ID;
		}
		ID++;
	}
	return 0;
}
