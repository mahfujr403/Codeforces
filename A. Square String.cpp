#include<iostream>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    int  count =0, l =  s.length()/2;

    if( s.length() % 2 != 0)
        count++;
    else
    {
        for(int i = 0; i<l; i++)
        {
            if(s[i] != s[l+i])
                count++;
        }
    }

    if(count == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


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
