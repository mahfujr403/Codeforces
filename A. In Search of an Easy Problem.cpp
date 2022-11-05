#include <iostream>
using namespace std;

int main()
{
    int n, opinion[101], check =0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> opinion[i];
        if(opinion[i] == 1)
            check++;
    }

    if(check==0)
        cout << "EASY";
    else
        cout << "HARD";


    return 0;
}
