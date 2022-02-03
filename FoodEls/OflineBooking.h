#pragma once

#include "Booking.h"
#include "Employee.h"

class OflineBooking : public Booking
{
private:
	string Adress;
	Employee Waiter;
};