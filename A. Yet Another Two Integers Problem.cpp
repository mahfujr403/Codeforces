#include<iostream>
using namespace std;

int main()
{
     int a, b, n, add,sub;

    cin>>n;

    while(n--)
    {
        cin>>a>>b;

        sub = (max(a,b)  - min(a,b)) ;

        if((sub % 10)>0)
            add = 1;
        else
            add = 0;

        cout<<(sub/10)+add<<endl;
    }

    return 0;
}
