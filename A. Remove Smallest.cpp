#include<iostream>
#include<algorithm>
using namespace std;

void solve()
{
    int n, Count = 0;
    cin>>n;

    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];

    sort (a, a+n);

    for(int i = 0; i<n-1; i++)
    {
        if((a[i+1]-a[i]) > 1)
            Count++;
    }

    if(Count == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}


int main()
{
    int t;

    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}



