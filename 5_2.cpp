#include <bits/stdc++.h>

using namespace std;

bool compare(pair<string, double> a, pair<string, double> b)
{
    return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;
    vector <pair<string, double>> ans(n);
    for (int i = 0; i < n; ++i) 
    {
        string name, surname;
        cin >> name >> surname;
        ans[i].first = name + " " + surname;
        double a, b, c;
        cin >> a >> b >> c;
        ans[i].second = (a + b + c) / 3;
    }
    sort(ans.rbegin(), ans.rend(), compare);
    for (int i = 0; i < n; ++i)
    {
        cout << ans[i].first << endl;
    }
}