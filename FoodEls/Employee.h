#pragma once
#include "human.h"
#include <string>


class Employee : public Human
{
private:
	string Passport;
public:
	Employee(Human human, string passport);
	Employee();
	string GetPassport();
	void SetPassport(string passport);
};
