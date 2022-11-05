#include<iostream>
using namespace std;
int main()
{
    int n, i, Count=0;
    string s;

    cin >>n >>s;

    for(i=0; i<n; i++)
    {
        if(s[i] == s[i-1])
            Count++;
    }
    cout << Count;


    return 0;
}
