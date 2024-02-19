#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Enter your name:\n";
    std::getline(std::cin, name);
    if (name.length() >= 1)
    {
      std::cout<< "your name is:" << name;
    }
    return 0;
}