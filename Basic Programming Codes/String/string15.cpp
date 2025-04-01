#include <iostream>
#include <string>

std::string intToRoman(int num)
{
    std::string roman;
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++)
    {
        while (num >= values[i])
        {
            roman += symbols[i];
            num -= values[i];
        }
    }

    return roman;
}

int main()
{
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    std::string roman = intToRoman(num);
    std::cout << "Roman numeral: " << roman << std::endl;

    return 0;
}