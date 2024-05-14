#include <iostream>
using namespace std;

int main()
{
    int myNum[3] = {10, 20, 30};
    int target = 50;
    int size = sizeof(myNum) / 4;

    for (int i = 0; i <= size; i++)
    {
        int sum = myNum[i] + myNum[i + 1];
        if (sum == target)
        {
            cout << sum;
        }
    }
}