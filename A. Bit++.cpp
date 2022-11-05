#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n, x=0;
    string opt;

    cin >> n;

    for( int i=1; i<=n; i++)
    {
        cin >> opt;

        if( opt == "++X" || opt == "X++")
            x++;
        else if( opt == "--X" || opt == "X--")
            x--;
    }

    cout << x;


    return 0;
}
