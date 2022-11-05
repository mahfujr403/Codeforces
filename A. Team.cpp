#include<iostream>
using namespace std;

int main()
{
    int i, n, solve[3], Count;

    cin >> n;

    int done = 0;
    for(i=0; i<n; i++)
    {
        Count=0;
        for(int j=0; j<3; j++)
        {
            cin >> solve[j];
            Count+=solve[j];
        }
        if(Count>=2)
            done++;
    }
    cout << done << endl;


    return 0;
}
