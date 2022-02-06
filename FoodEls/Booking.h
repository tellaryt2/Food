#pragma once

#include "human.h"
#include <string>
#include <list>


class Booking
{

public:
	Booking(Human human);
	int GetID(Human human);

private:

	int ID;
	list<string> ListOfClients;
	list<string>::iterator Order = ListOfClients.begin();
};