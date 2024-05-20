#include <iostream>
using namespace std;

void selection(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)

    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] <= arr[min])
            {
                min = j;
            }
                }
        swap(arr[i], arr[min]);
    }
}
int main()
{
    int arr[] = {2, 3, 5, 6, 1, 4, 8};

    int size = sizeof(arr) / sizeof(int);
    selection(arr, size);

    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i];
    }
}