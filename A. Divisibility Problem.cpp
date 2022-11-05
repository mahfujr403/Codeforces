#include<iostream>
using namespace std;

int main()
{
    int t, a, b;

    cin>>t;

    for(int i = 1; i<=t; i++)
    {
        int rem =0;

        cin >> a>>b;

        if(a%b==0)
            cout << rem<<endl;
        else
        {
            rem = a%b;
            cout<< b - rem<<endl;
        }
    }

    return 0;
}
