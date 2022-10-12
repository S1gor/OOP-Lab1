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
	Vector(Vector& vector);
	~Vector();

	int setSize();
	int getSize();

	void setElem(int index, float d);
	float getElem(int index);

	float getLen();

	void inputRandomly();
	void input();

	float& peek(int index) const;
	void print();
	void clear();

	void add(Vector const& vector);
	void multiply(float d);

	float& operator[](int index) const;

	Vector operator+(Vector const& vector) const;
	friend Vector operator+(Vector const& vector, float val);
	friend Vector operator+(float val, Vector const& vector);

	Vector const& operator=(Vector const& vector);
	bool operator==(Vector& vector);
	bool operator!=(Vector& vector);
	friend bool operator<(float value, Vector& vector);

	friend std::ostream& operator<<(std::ostream& out, Vector const& vector);
	friend std::istream& operator>>(std::istream& in, Vector& vector);
};