#include<algorithm>
#include<iostream>
using namespace std;


void solve()
{
    int n, dif;
    cin>>n;
    int s[n];

    for(int i = 0; i<n; i++) cin>>s[i];

    sort(s, s+n);
    int Min = s[n-1];

    for(int i = n-1; i>0; i--)
    {
        dif = s[i] - s[i-1];
        Min = min(dif, Min);
    }
    cout<<Min<<endl;
}


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }


    return 0;
}

