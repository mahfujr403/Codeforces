#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    string str1, str2;

    cin >> str1 >> str2;

   int i=0;
    while(str1[i] != '\0')
    {
        if( str1[i] >= 65 && str1[i] <= 90)
            str1[i] += 32;

        if( str2[i] >= 65 && str2[i] <= 90)
            str2[i] += 32;

        i++;
    }

     if( str1 == str2)
            cout << "0";
        else if(str1 < str2)
            cout << "-1" ;
        else  if(str1 > str2)
            cout << "1";


    return 0;
}
