#include <iostream>

using namespace std;

int main()
{
	long double x, y;
	cin >> x >> y;
	int cnt = 1;
	while (x <= y)
	{
		x *= 1.1;
		cnt++;
	}
	cout << cnt << endl;
}