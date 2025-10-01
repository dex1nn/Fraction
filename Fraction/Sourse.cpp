#include <iostream>
#include "Fraction.h"	

using namespace std;

int main() {
	Fraction a(2, 3);
	Fraction b(1, 2);
    std::cout << a + b << endl;
    std::cout << a - b << endl;
    std::cout << a * b << endl;
    std::cout << a / b << endl;
}