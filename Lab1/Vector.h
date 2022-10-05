#pragma once

class Vector
{
	int* data = 0;
	int size = 0;

public:
	Vector();
	~Vector();

	int setSize();
	int getSize() const;

	float getLen() const;

	void setDataRandomly(int min, int max);
	void setDataManually();

	void print() const;

	void clear();

	bool operator==(Vector& vector);
	bool operator!=(Vector& vector);
	friend bool operator<(float value, Vector const& vector);
};