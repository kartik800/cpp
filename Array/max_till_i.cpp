#include <bits/stdc++.h>
using namespace std;
int main()
{
    int maximum = -19999999;
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, arr[i]);
        cout << maximum << endl;
    }

    return 0;
}