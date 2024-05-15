#include <iostream>
using namespace std;
void ArrInput(int arr[][20], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void out(int arr[][20], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
}
int main()
{
    int Array[20][20];
    int Array2[20][20];
    int mul[20][20];
    int size;
    cout << "Enter Size of Array ";
    cin >> size;
    if (size <= 1 || size >= 20)
    {
        cout << "plese Enter size greater > 1 & less 20" << endl;
    }
    else
    {
        cout << "Input Array 1" << endl;
        ArrInput(Array, size);
        cout << "Input Array 2" << endl;
        ArrInput(Array2, size);
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                mul[i][j] = Array[i][j] * Array2[i][j];
            }
        }
        cout << "Array 1" << endl;
        out(Array, size);
        cout << "Array 2" << endl;
        out(Array2, size);
        cout << "Multiplication " << endl;
        out(mul, size);
    }
}