#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double p[100], sum = 0;

    cin >> n;

    for(int i=1; i<=n; i++)
    {
        cin >> p[i];
        sum+=p[i];
    }

    cout<<fixed<<setprecision(12) << sum / n;

    return 0;
}
