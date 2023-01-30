#include<iostream>
using namespace std;


int main()
{
    int n, Max=0, ans=0;
    cin>>n;

    int  a[n+1];

    for(int i = 0; i<n; i++)
        cin>>a[i];

    for(int i = 0; i<n; i++)
        Max = max(Max, a[i]);


    for(int i = 0; i<n; i++)
        ans += Max-a[i];


    cout<<ans<<endl;

    return 0;
}

