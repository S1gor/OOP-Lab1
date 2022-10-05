#pragma once

class Vector
{
	int* data = 0;
	int size = 0;

public:
	Vector();
	~Vector();

	int setSize();
	int getSize();
	float getLen();

	void fillRandomly(int min, int max);
	void fillManually();

	void print();
	void clear();

	bool operator==(Vector& vector);
	bool operator!=(Vector& vector);
	friend bool operator<(float a, Vector& vector);
};