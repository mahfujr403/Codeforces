#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;

    cin >> s;

    for(int i; i<s.size(); i++)
    {
        if(s[0]>= 97 && s[0]<=122)
            s[0]-=32;
    }
    cout << s << endl;

    return 0;
}
