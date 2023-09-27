#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, w;
    cin >> n >> m >> w;
    vector <vector<int>> a(n + 2, vector<int>(m + 2));
    for (int i = 0; i < w; ++i)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] = 100;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (a[i][j] == 100)
            {
                cout << '*';
                continue;
            }
            a[i][j] = (a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i][j + 1] + a[i + 1][j + 1] + a[i + 1][j] + a[i + 1][j - 1] + a[i][j - 1]) / 100;
            cout << a[i][j];
        }
        cout << endl;
    }
}