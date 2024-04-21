#include <iostream>
using namespace std;
int main()
{
    int col, row;
    int i, j;
    string st = "cpp";
    cout << "Enter row & Col \n";
    cin >> row >> col;
    system("clear");

    for (i = 1; i <= row; i++)
    {
        for (j = i; j <= col; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "st";
}