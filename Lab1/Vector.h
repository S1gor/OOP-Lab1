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

	void fillRandomly(int min, int max);
	void fillManually();

	void print();
	void clear();
};