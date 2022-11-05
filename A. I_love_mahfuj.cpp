#include<iostream>
using namespace std;

int main()
{
    int n, count = 0, point[1005];

    cin>>n;
    for(int i = 1; i<=n; i++)
        cin>>point[i];

    int max=point[1];
    int min = point[1];

    for(int i = 2; i<=n; i++)
    {
        if(max<point[i])
        {
            max= point[i];
            count++;
        }

     if(min>point[i])
        {
            min= point[i];
            count++;
        }
    }

    cout<<count;

    return 0;
}
