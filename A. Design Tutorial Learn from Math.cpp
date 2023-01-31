#include<iostream>
#include<math.h>
using namespace std;


bool is_composite(int n)
{
    if (n <= 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return true;
    return false;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 4; i <= n / 2; i++)
        if (is_composite(i) && is_composite(n - i))
        {
            cout << i << " " << n - i << endl;
            break;
        }


    return 0;
}
