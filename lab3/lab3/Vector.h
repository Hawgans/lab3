#pragma once

class Vector
{
private:
	int x, y, z;
public:
	void Input();
	void abs();
	void sum(Vector a, Vector b);
	void substract(Vector a, Vector b);
	void Display();
};