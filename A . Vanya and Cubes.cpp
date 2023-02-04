
#include<iostream>
using namespace std;


int main()
{
    int n;
    cin >>n;

    int i = 0, req=0, total = 0;
    while(total<= n)
    {
        i++;
        req+=i;
        total+=req;
    }

    cout<<i-1<<endl;;

    return 0;
}
