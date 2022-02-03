#pragma once

#include "human.h"
#include <string>
#include <list>


class Booking : public Human
{
public:
	int GetID(Booking order, Human human)
	{

	}
private:
	int ID;
	list<string> NumberOrder;
};