// Sum of N natural number
#include <iostream>
int main()
{
    int num;
    int i = 1;

    std::cout << "Enter last number for Natural Number:  " << std::endl;
    std::cin >> num;
    while (i <= num)
    {
        std::cout << " " << i << std::endl;
        i++;
    }
}