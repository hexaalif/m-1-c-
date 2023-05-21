#include <iostream>

int main()
{
    std::cout << "hello world";
    std::cout << "\nworld";
    std::cout << "world"
              << "hello\n";
    std::cout << "hello" << std::endl
              << "world";
    return 0;
}