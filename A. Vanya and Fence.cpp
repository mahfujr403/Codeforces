#include <iostream>
using namespace std;

int main()
{
    int a, n, h, Count =0;

  cin >> n >> h ;

  for ( int i = 0; i < n; i++)
  {
      cin >> a;

      if(a > h)
         Count +=2;
         else
            Count +=1;
  }

  cout << Count;


    return 0;
}
