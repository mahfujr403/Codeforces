#include<iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np,A, B, C, ans;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    A = (k * l)/nl;
    B = (c * d);
    C = (p / np);

    ans = min( A, B);
    ans = min(ans, C);
    ans = ans / n;

    cout<<ans;


    return 0;
}
