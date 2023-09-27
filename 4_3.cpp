#include <bits/stdc++.h>

using namespace std;

string f(string s)
{
    long long num = 0, p = 1;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        p *= 10;
    }
    for (int i = 0; i < s.size(); ++i)
    {
        num += p * (s[i] - '0');
        p /= 10;
    }
    string bin = ""; // convert to binary
    while (num != 0)
    {
        bin += to_string(num % 2);
        num /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string s;
    fin >> s;
    string ans = "";
    int i = 0;
    while (i < s.size())
    {
        int j = i;
        bool ok = false; // encounter the end of the next cycle
        string num = "";
        for (int k = i; k < s.size(); ++k)
        {
            if ((s[k] - '0') >= 0 and (s[k] - '0') <= 9)
            {
                // add digit to the number
                num += s[k];
            }
            else {
                // break the cycle
                j = k + 1;
                ok = true;
                if (num.size() == 0)
                {
                    ans += s[k];
                    break;
                }
                else {
                    ans += f(num);
                    ans += s[k];
                    break;
                }
            }
        }
        if (ok == false)
        {
            ans += f(num);
            break;
        }
        i = j;
    }
    fout << ans;
}