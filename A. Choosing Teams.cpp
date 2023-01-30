#include<iostream>
using namespace std;

int main()
{
    int n, k, Count=0;
    cin>>n >>k;

    int y[n];

    for(int i = 0; i<n; i++)
        cin>>y[i];

    for(int i = 0; i<n; i++)
        if(y[i] <= (5-k))
            Count++;

    cout<< Count/3;

    return 0;
}

