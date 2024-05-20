#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5, 4};
    int size = sizeof(arr) / sizeof(int);
    int i, j;

    for (int i = 0; i = size - 1; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        cout << endl
             << arr[i] << endl;
    }
}