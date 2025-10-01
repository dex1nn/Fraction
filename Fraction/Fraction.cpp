#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator) {
	this->denominator = denominator;
	this->numerator = numerator;
}

Fraction::Fraction() {}

void Fraction::ShowFraction(){
	cout << numerator << "/" << denominator << endl;
}

Fraction Fraction::operator+(const Fraction& other) const {
    return Fraction(numerator * other.denominator + other.numerator * denominator,
        denominator * other.denominator);
}

Fraction Fraction::operator-(const Fraction& other) const {
    return Fraction(numerator * other.denominator - other.numerator * denominator,
        denominator * other.denominator);
}

Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(numerator * other.numerator,
        denominator * other.denominator);
}

Fraction Fraction::operator/(const Fraction& other) const {
    if (other.numerator == 0) {
        std::cout << "Error";
        return Fraction(0, 1);
    }
    return Fraction(numerator * other.denominator,
        denominator * other.numerator);
}

std::ostream& operator<<(std::ostream& os, const Fraction& f) {
    return os << f.numerator << "/" << f.denominator;
}