#include <iostream>
using namespace std;

int Binary(int *arr, int key, int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] <= key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter  Size of Array " << endl;
    cin >> size;
    int arr[size];
    cout << "Element of Array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key ";
    cin >> key;
    int ind = Binary(arr, key, size);
    if (arr[ind] == key)
    {
        cout << "The Value is found on index " << ind << endl
             << "The Value is " << key;
    }
    else
    {
        cout << "Key not FOund";
    }
}