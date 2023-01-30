#include<iostream>
using namespace std;

int solve()
{
    int a, b, ans;
    cin>>a>>b;

    if( a == b)
        ans = 0;

    else if(a<b)
        if((b-a)% 2 != 0)
            ans = 1;
        else
            ans = 2;

    else if(a>b)
        if((b-a)% 2 == 0)
            ans = 1;
        else
            ans = 2;

    return ans;
}


int main()
{
    int t;

    cin>>t;
    while (t--)
    {
        cout<<solve()<<endl;
    }

    return 0;
}



