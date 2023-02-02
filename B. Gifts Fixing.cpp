#include<algorithm>
#include<iostream>
#define ll long long
using namespace std;


void solve()
{
    int n;
    cin>>n;

    ll a[n],b[n];
    ll m_a = 1e9+10, m_b = 1e9+10, total = 0;



    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        m_a = min(m_a, a[i]);
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        m_b = min(m_b, b[i]);

    }



    for(int i=0; i<n; i++) total+=max( a[i]-m_a, b[i]-m_b );


    cout<<total<<endl<<endl;
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

