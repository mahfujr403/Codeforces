#include<iostream>
using namespace std;



int main()
{
    int n, l=0, r=0, z=0, Sereja=0, Dima=0;

    cin>>n;
    int arr[n+1];
    l = 0, r = n-1;

    for(int i = 0; i<n; i++) cin>>arr[i];

    while(l<=r)
    {
        if(z%2 == 0)
        {
            if(arr[l] > arr[r])
            {
                Sereja += arr[l];
                l++;
            }
            else
            {
                Sereja += arr[r];
                r--;
            }
        }
        else
        {
            if(arr[l] > arr[r])
            {
                Dima += arr[l];
                l++;
            }
            else
            {
                Dima += arr[r];
                r--;
            }
        }
        z++;
    }

    cout<<Sereja<<" "<<Dima<<endl;

    return 0;
}

