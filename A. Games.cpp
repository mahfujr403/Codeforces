#include<iostream>
using namespace std;

int main()
{

    int n, h[30], a[30], count=0;

    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        cin>>h[i];
        cin>>a[i];
    }

    for(int j = 1; j<=n; j++)
    {
        for(int i = 1; i<=n; i++)
        {
            if(h[i]==a[j])
                count++;
        }
    }

    cout<<count;

    return 0;
}
