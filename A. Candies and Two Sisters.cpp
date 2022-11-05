#include<iostream>
using  namespace std;

int main()
{
    int t;
    long long int n, ans;

    cin>> t;

    while(t--)
    {
           cin>> n;

    if(n==1 || n == 2)
        cout<< "0";
        else
        {
            ans = (n-1)/2;
            cout<< ans;
        }
        cout<<endl;
    }

    return 0;
}
