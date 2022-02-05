#include "human.h"

Human::Human(string fio, string gender)
{
	this->Fio = fio;
	this->Gender = gender;
}

string Human::GetFio()
{
	return Fio;
}

string Human::GetGender()
{
	return Gender;
}

void Human::SetFio(string fio)
{
	this->Fio = fio;
}

void Human::SetGender(string gender)
{
	this->Gender = gender;
}