#include <iostream>
using namespace std;

int main()
{
    int n, Count =0;
    int p[101], q[101];

    cin >> n  ;

    for ( int i = 1; i <= n; i++)
    {
        cin >> p[i]  >>  q[i];

        if(q[i]-p[i] >=2)
            Count++;
    }
    cout << Count;


    return 0;
}
