#pragma once
#include<iostream>

class Square{
private:
	int length_;
	int width_;
		
public:
	Square(int length, int width);

	double square() const;

	double perimeter() const;

	void info() const;

	void in() const;


};

