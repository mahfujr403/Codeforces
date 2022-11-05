#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    int i,j,Count=0;

    cin >> name;

    for(  i=0; i<name.size(); i++)
    {
        for(  j=0; i<name.size(); j++)
            if(name[i]==name[j])
                break;

        if(i==j)
            Count++;
    }

    if(Count%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout <<"IGNORE HIM!";



    return 0;
}
