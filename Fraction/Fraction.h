#pragma once
#include <iostream>

using namespace std;

class Fraction
{
	int numerator;
	int denominator;
public:
	Fraction(int numerator, int denominator);
	Fraction();
	void ShowFraction();
	Fraction operator+(const Fraction& other) const;
	Fraction operator-(const Fraction& other) const;
	Fraction operator*(const Fraction& other) const;
	Fraction operator/(const Fraction& other) const;
	friend std::ostream& operator<<(std::ostream& os, const Fraction& f);
};

