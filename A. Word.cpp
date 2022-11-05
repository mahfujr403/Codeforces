#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int lower=0, upper=0;
    char s[101];

    cin >> s;

    for( int i=0; i<strlen(s); i++)
    {
        if(s[i] >= 97 && s[i] <= 122)
            lower++;
        else
            upper++;
    }

    if(upper > lower)
        strupr(s);
    else
        strlwr(s);

    cout << s;

    return 0;
}
