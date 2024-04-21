#include <iostream>
#include <stdio.h>
#define saurav "Hello world"
using namespace std;
int main()
{
    int i;
    float f;
    double d;
    char c;
    printf("Hello size of datatypes  is \n");
    cout << "Integer size : " << sizeof(i) << endl;
    cout << "Float Size : " << sizeof(f) << endl;
    cout << "Double Size : " << sizeof(d) << endl;
    cout << "Char Size : " << sizeof(c) << endl;
    cout << saurav;
}