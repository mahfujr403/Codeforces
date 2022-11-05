#include<iostream>
using namespace std;

int main()
{
    int i, n, a, police = 0, crime = 0;

    cin>>n;

    for(i = 0; i<n; i++)
    {
        cin>>a;

        if(a > 0)
            police += a;
        else
        {
            if(police>0)
                police--;
            else
                crime++;
        }
    }

    cout<<crime;


    return 0;
}
