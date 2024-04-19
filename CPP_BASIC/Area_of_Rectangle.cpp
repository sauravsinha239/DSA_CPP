#include <iostream>
int main()
{
    double width, height;
    std::cout << "Enter Width or Height : " << std::endl;
    std::cin >> width;
    std::cin >> height;
    double Area = width * height;
    std::cout << "Area of Rectangle is = " << Area << std::endl;
}