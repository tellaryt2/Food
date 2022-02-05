#include "Employee.h"


Employee::Employee(Human human, string passport)
{
	this->Passport = passport;
}

Employee::Employee()
{
	SetFio("");
	SetGender("");
	Passport = "";
}

string Employee::GetPassport()
{
	return Passport;
}

void Employee::SetPassport(string passport)
{
	Passport = passport;
}
