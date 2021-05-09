#include <bits/stdc++.h>
using namespace std;
/* Concept:
    Rows : 1 to n
    columns: 1 to row_no
    element (Row_no + Col_no) Even -> 1*/

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1"
                     << " ";
            }
            else
            {
                cout << "0"
                     << " ";
            }
        }
        cout << endl;
    }

    return 0;
}