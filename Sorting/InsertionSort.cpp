#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 3, 1, 2, 4};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 1; i < size; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        cout << "Curr " << curr << endl;
        cout << " i =" << i << endl;
        cout << "prev = " << prev << endl;
        while (prev >= 0 && arr[prev] > curr)
        {
            // swap(arr[prev], arr[prev + 1]);
            int tmp = arr[prev];
            cout << "Tmp = " << tmp << endl;
            arr[prev] = arr[prev + 1];
            cout << "Prev= " << arr[prev] << endl;
            arr[prev + 1] = tmp;
            cout << "Arr prev +1 = " << arr[prev + 1] << endl;
            prev--;
            cout << "Prev -- " << prev;
        }
        arr[prev + 1] = curr;
    }
    cout << "Sorted" << endl;

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << endl;
    }
}