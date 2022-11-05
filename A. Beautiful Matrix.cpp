#include<iostream>
using namespace std;
int main ()
{
    int i, j, matrix[10][10], row, col;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
            cin >> matrix[i][j];
    }

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
            if(matrix[i][j] == 1 )
            {
                row = i;
                col = j;
            }
    }
    row = 3 - row;
    col = 3 - col;

    if( row < 0 )
        row = -row;
    if( col < 0 )
        col = -col;

    cout << row + col;


    return 0;
}

