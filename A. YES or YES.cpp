#include<iostream>
#include<algorithm>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }

    if(s == "yes")
        cout<<"YES";
    else
        cout<<"NO";

    cout<<endl;
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

