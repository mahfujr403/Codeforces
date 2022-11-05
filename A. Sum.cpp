#include<iostream>
using namespace std;

int main()
{
    int n, a, num[4];

    cin >> n;

    for(int i = 1; i<=n; i++)
    {
        int sum=0;

        for( int  i = 1; i<=3; i++)
            cin >> num[i];

        int    Max = 0;
        num[0]=0;

        for( int  i = 1; i<=3; i++)
        {
            if(Max < num[i])
            {
                Max = num[i];
                num[0]=Max;
            }
            sum+=num[i];

        }
        sum = sum - num[0];

        if(Max==sum)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}
