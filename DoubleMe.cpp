// DoubleMe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int x{};
    std::cout << "Enter an integer to double!\n";
    std::cin >> x;
    std::cout << "Double that number is: " << x * 2 << "\n";
    std::cout << "Triple that number is: " << x * 3;
}

