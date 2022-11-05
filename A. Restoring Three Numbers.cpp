#include<iostream>
using namespace std;


int FindSum ( int a, int b, int c, int d)
{
    int sum;

    if( a>b && a>c && a>d)
        sum = a;
    else if( b>c && b>d)
        sum = b;
    else if( c>d)
        sum = c;
    else
        sum = d;

    return sum;
}

void FindNum( int a, int b, int c, int d, int sum)
{
    if(sum > a)
        {
            a = sum - a;
        cout << a << "  ";
        }
    if(sum > b)
      {
            b = sum - b;
         cout << b << "  ";
      }
    if(sum > c)
        {
            c = sum - c;
         cout << c << "  ";
        }
    if(sum > d)
         {
             d = sum - d;
         cout << d << "  ";
         }

}

int main()
{
    int a, b, c, d, sum ;

    cin >> a >> b >> c >> d ;

    sum = FindSum (a, b, c, d);

    FindNum ( a, b, c, d, sum);


    return 0;
}
