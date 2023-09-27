#include <bits/stdc++.h>

using namespace std;

int is_possible(vector<int> a)
{
    for (int i = 0; i < a.size() - 1; ++i)
    {
        if (a[i] == a[i + 1])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int ans = 0;
    while (is_possible(a) != -1)
    {
        int index = is_possible(a);
        bool flag = false;
        for (int i = index; i < a.size() - 1; ++i)
        {
            if (a[i] != a[i + 1])
            {
                // remove elements in the range from index to i
                a.erase(a.begin() + index, a.begin() + i + 1);
                ans += (i - index + 1);
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            ans += a.size();
            break;
        }
    }
    cout << ans << endl;
}