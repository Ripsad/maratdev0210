#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (j < n - (i + 1))
            {
                a[i][j] = 0;
            }
            else if (j == n - (i + 1))
            {
                a[i][j] = 1;
            }
            else {
                a[i][j] = 2;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}