#pragma once

class Vector
{
	float* data = nullptr;
	int size = 0;

public:
	Vector();
	Vector(int size);
	Vector(float x, float y);
	Vector(float x, float y, float z);
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