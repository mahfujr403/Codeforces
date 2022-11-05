#include <iostream>
using namespace std;

int main()
{
    int a, n, arr[105];

    cin >> n;

    for(int i = 1; i<=n; i++)
    {
        cin>>a;
        arr[a]=i;
    }
    for(int i = 1; i<=n; i++)
        cout << arr[i] << " ";


    return 0;
}
