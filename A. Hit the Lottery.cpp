#include<iostream>
using namespace std;

int main()
{
    int n, bill= 0, a[]={100,20,10,5,1};

    cin>>n;

    for(int i = 0; i<5; i++)
    {
            bill += n/a[i];
            n = n%a[i];
    }



    cout << bill;

    return 0;
}
