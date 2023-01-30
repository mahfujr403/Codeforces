#include<iostream>
using namespace std;

int main()
{
    int k, r;

    cin >> k>>r;


    int i =0;

    while( !(( k*i )%10 == r))
    {
        i++;

        if(( k*i )%10 == 0)
            break;
    }
    cout << i;

    return 0;
}
