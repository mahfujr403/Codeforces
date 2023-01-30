#include<iostream>
using namespace std;


void solve()
{
    int s[5], Max[2], Min[2];

    for(int i = 1; i<=4; i++)
    cin>>s[i];

    Max[0] = max(s[1], s[2]);
    Max[1] = max(s[3], s[4]);
    Max[2] = min(Max[0], Max[1]);

    Min[0] = min(s[1], s[2]);
    Min[1] = min(s[3], s[4]);
    Min[2] = max(Min[0], Min[1]);

    if(Max[2] > Min[2])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}

