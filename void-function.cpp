#include <iostream>
#include <cmath>

double power (double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    
    return result;
}

void print_pow (double base, int exponent) {
    double myPower = power(base, exponent);

    std::cout << base << " raised to the " << exponent << " power is " << myPower << std::endl;
}

int main () {
    int base, exponent;

    std::cout << "Enter base value ";
    std::cin >> base;
    std::cout << "Enter exponent value ";
    std::cin >> exponent;

    print_pow(base, exponent);
    return 0;
}