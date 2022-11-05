#include<iostream>
using namespace std;

int main()
{
    int  Count = 0;
    long long n;
    cin >> n;

    while( n > 0)
    {
        if(n %10 == 4 || n %10 == 7)
            Count++;

        n = n/10;
    }
    if( Count == 4 || Count ==7)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}
