#include <bits/stdc++.h>
using namespace std;

// Ex:1  row=5 col =5
/*  *****
    *****
    *****
    *****
    *****  */

int main()
{
    int row, col;

    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int i = 1; i <= col; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}