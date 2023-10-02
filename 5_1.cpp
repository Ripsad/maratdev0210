#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum_a, sum_b, sum_c = 0;
    for (int i = 0; i < n; ++i)
    {
        string name, surname;
        cin >> name >> surname;
        double a, b, c;
        cin >> a >> b >> c;
        sum_a += a;
        sum_b += b;
        sum_c += c;
    }
    cout << fixed << setprecision(1) <<  sum_a / n << " " << sum_b / n << " " << sum_c / n << endl;
}