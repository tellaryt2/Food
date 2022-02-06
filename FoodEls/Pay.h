#pragma once
#include "Booking.h"
#include "Restaurant.h"


class Pay : public Booking, Restaurant
{
public:
	void PayOrder(Booking order);

	void PayScore(Restaurant score);
};