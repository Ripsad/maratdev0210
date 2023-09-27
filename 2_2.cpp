#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	while (a > b)
	{
		if (a % 2 == 0 and b * 2 <= a)
		{
			a /= 2;
			cout << ":2" << endl;
		}
		else {
			cout << "-1" << endl;
			a -= 1;
		}
	}
}