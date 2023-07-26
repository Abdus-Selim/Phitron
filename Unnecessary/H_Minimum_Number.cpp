#include <iostream>
#include <string>
#include <algorithm>

std::string reverseString(std::string str)
{
    std::reverse(str.begin(), str.end());
    return str;
}

int main()
{
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    std::string reversed = reverseString(input);
    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}
