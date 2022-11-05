#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int Count = 0, l;
    string s, t;

    cin >> s >> t;

    reverse(s.begin(), s.end());
    if( s == t )
        cout << "YES";
    else
        cout <<"NO";

    return 0;
}
