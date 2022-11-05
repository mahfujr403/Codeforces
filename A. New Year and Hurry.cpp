#include<iostream>
using namespace std;

int main()
{
    int i, n, k, u_time, time = 0;

    cin>>n>>k;
    u_time = 240 - k;

    for( i = 1; i<=n; i++ )
    {
        time += 5 * i;
        if(time > u_time)
            break;
    }
    cout<<i-1;


    return 0;
}
