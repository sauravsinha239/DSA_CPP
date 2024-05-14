#include <iostream>
using namespace std;

int exactly3Divisors(int N)
{
    int count = 1;
    int i;

    for (i = 1; i < N; i++)
    {
        if (i % N == 0 && i == N)
        {
            count = count + 1;
        }
    }
    return count;
}

int main()
{
    int n = 15;
    int ans = exactly3Divisors(n);
    cout << ans;
}