#include<iostream>
using namespace std;
int main()
{
    int x, i, Count = 0;

    cin >> x;

    for(i=5; i>=1; i--)
    {
        Count += x / i;
        x = x % i;
    }

    cout << Count;


    return 0;
}
