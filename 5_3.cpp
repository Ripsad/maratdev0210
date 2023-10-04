#include <bits/stdc++.h>

using namespace std;

struct student {
    string class_name;
    string name;
    string date;
};

bool compare(const student & s1, const student & s2)
{
    if (s1.class_name != s2.class_name)
    {
        return (s1.class_name < s2.class_name);
    }
    return (s1.name < s2.name);
}

int main()
{
    int n;
    cin >> n;
    vector <student> a(n);
    for (int i = 0; i < n; ++i)
    {
        string surname, name, class_name, date;
        cin >> surname >> name >> class_name >> date;
        a[i].class_name = class_name;
        a[i].name = surname + " " + name;
        a[i].date = date;
    }
    sort(a.begin(), a.end(), compare);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i].class_name << " " << a[i].name << " " << a[i].date << endl;
    }
}
