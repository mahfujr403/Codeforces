#include<iostream>
using namespace std;
int main()
{
    int k, w, n, j=0;
    cin >> k >> w >> n;

    for( int i=1; i<=n; i++)
        j += k * i;

    if( j > w)
        cout << j - w;
    else
        cout << "0";


    return 0;
}
