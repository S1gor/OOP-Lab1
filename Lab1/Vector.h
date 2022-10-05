#pragma once

class Vector
{
	int* data;
	int size;

public:
	Vector();
	~Vector();

	int scanSize();
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