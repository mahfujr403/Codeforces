#include<iostream>
using namespace std;

int main()
{
    int a, b, c, Max, Min;

    cin>>a>>b>>c;

    Max = max(a,b);
    Max = max(Max, c);

    Min = min(a,b);
    Min = min(Min, c);

   cout<< Max - Min;

    return 0;
}
