#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int q, n, i, j;
   string t, s;

   cin >> q;
       cin >> n;

       for(j=0; j<n; j++)
        cin >> t;

              for(j=n-1; j>=0; j--)
              {
                  if(t[j] !='0')
                   {
                       int x = t[j-1]-48;
                       int y = t[j-2]-48;
                       y = y * 10 + x;
                       char c = y +96;
                       s.push_back(c);

                       i -=2;
                   }
                   else
                   {
                       int x = t[j] - 48;
                       char c = x + 96;
                       s.push_back(c);
                   }
              }

              reverse(s.begin(), s.end());
              cout << s;







    return 0;
}

