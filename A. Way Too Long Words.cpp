#include<iostream>
using namespace std;
int main()
{
    int n, i;
    string word;

    cin >> n;
    for( i=0; i<n; i++)
    {
        cin >> word;

        int j=0, l = 0;
        while( word[j] != '\0')
        {
            l++;
            j++;
        }
        if( l <= 10)
            cout << word << endl ;
        else
            cout << word[0] << l-2 << word[l-1] << endl ;

    }


    return 0;
}

