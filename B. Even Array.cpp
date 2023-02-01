#include<iostream>
using namespace std;


void solve()
{
    int n, even =0, odd=0, fine=0;
    cin>>n;

    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];


    for(int i = 0; i<n; i++)
    {
        if((i%2 == 0) && (a[i] %2 != 0))
            odd++;
        else  if((i%2 != 0) && (a[i] %2 == 0))
            even++;
    }

    if(even != odd)
        cout<<-1<<endl;
    else
        cout<<odd<<endl;


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
