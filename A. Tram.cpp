#include<iostream>
using namespace std;

int main()
{
    int  Max, con[1005], n, in[1005], ex[1005];

    cin >> n;

    Max = con[0] = {0};

    for( int i = 1; i <= n; i++)
    {
        cin >> ex[i] >> in[i];
        con[i] = con[i-1] + in[i] - ex[i];


       if(Max < con[i])
            Max = con[i];
    }
    cout << Max;


    return 0;
}
