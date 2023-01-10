#include <iostream>

int main () {
    int age;

    std::cout << "Hey buddy, how old are you? ";
    std::cin >> age;

    // string concatenation
    std::cout << "I'm " << age << " years old." << std::endl;
    return 0;
}