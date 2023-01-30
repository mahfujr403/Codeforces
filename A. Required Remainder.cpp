#include<iostream>
using namespace std;

int solve()
{
    int x, y, n, rem;
    cin>>x>>y>>n;

    rem = n%x;

    if(y > rem)
        return x*((n/x)-1)+y;
    else
        return n-(rem - y);
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


