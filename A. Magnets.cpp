#include<iostream>
using namespace std;

int main()
{
    int i, n, Count = 0, magnet[100005];


    cin >> n;
    for(i=1; i<=n; i++)
        cin>>magnet[i];

    for(i=1; i<=n; i++)
    {
        if( magnet[i] != magnet[i+1])
            Count++;
    }

    cout << Count;


    return 0;
}
