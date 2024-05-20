#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5, 4};
    int size = sizeof(arr) / sizeof(int);
    int i, j;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout << "Sorted array";
    for (i = 0; i < size; i++)
    {
        cout << endl
             << arr[i] << endl;
    }
}