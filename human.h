#pragma once

#include <string>

using namespace std;

class Human
{
private:
	string Fio;
	string Gender;

public:

	Human(string fio, string gender);
	string GetFio();
	string GetGender();
	void SetFio(string fio);
	void SetGender(string gender);
};