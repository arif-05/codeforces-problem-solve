// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        for (i = 0; i < n; i++)
        {
            if (a[i] == 'b' || a[i] == 'c' || a[i] == 'd')
                cout << a[i];
            else
            {
                cout << a[i];
                if (a[i + 1] == 'b' || a[i + 1] == 'c' || a[i + 1] == 'd')
                {
                    if (a[i + 2] != 'a' && a[i + 2] != 'e')
                    {
                        cout << a[i + 1];
                        i++;
                    }
                }
                if (i != n - 1)
                    cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}