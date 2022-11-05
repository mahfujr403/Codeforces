#include<iostream>
using namespace std;

int main ()
{
    int i, n, k, Count=0, score[101];

    cin >> n >> k;

    for(i=1; i<=n; i++)
        cin >> score[i];

    for(i=1; i<=n; i++)
    {
        if( score[i] >= score[k] && score[i] > 0)
            Count++;
        }

    cout << Count;


    return 0;
}
