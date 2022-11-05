#include<iostream>
#include<cstring>

using namespace std;

int main ()
{
    int t, i;
    string b,a;

    cin >> t;

    while(t--)
    {
        cin >> b;

        		string a = b.substr(0, 2);
        for(i=3; i<b.size(); i+=2)
        {
            a+= b[i];
        }

        cout << a << endl<< endl;
    }

    return 0;
}
