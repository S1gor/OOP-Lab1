#pragma once
#include <iostream>

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

	void setElem(int index, float d);
	float getElem(int index) const;

	float getLen() const;

	void setDataRandomly(int min, int max);
	void setDataManually();

	float& peek(int index) const;
	void print() const;
	void clear();

	void add(Vector const& vector);
	void multiply(float d);

	float& operator[](int index) const;

	bool operator==(Vector& vector);
	bool operator!=(Vector& vector);
	friend bool operator<(float value, Vector const& vector);

	//friend std::ostream& operator<<(std::ostream& ost, Vector const& vector);
};