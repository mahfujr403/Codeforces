#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n, p, q, Count = 0;
    int arr[210];


    cin>>n;
    cin>>p;
    for(i=0; i<p; i++)
        cin>>arr[i];

    cin >> q;
    for(i=p; i<p+q; i++)
        cin>>arr[i];

    sort(arr, arr+(p+q));


    for(i=0; i<p+q; i++)
    {
        if(arr[i]!=arr[i+1])
            Count++;
    }

    if(Count == n )
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

    return 0;
}
