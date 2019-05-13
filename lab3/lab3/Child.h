#pragma once
#include <string>

using namespace std;

class Child
{
private:
	string Name;
	string Surname;
	int Age;
public:
	Child();
	void Input();
	void Display();
	~Child()
	{}
};