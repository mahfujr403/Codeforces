#include<iostream>
#include<string>
using namespace std;

int main()
{
    string num1, num2;

    cin>>num1>>num2;

    for(int i = 0; i<num1.length(); i++)
    {
        if(num1[i] != num2[i])
            num1[i] = '1';
        else
            num1[i] = '0';
    }
        cout << num1<<endl;


    return 0;
}
