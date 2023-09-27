#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int x, n;
	cin >> x >> n;
	vector <int> prev; // store the previous result 
	vector <int> a; // store the new vector
	a.push_back(x);
	prev.push_back(x);
	for (int i = 1; i < n; ++i)
	{
		int j = 0;
		a.clear(); // clear all elements from a
		while (j < prev.size())
		{
			if (j + 2 < prev.size())
			{
				// check if three numbers go in a row 
				if (prev[j] == prev[j + 1] and prev[j] == prev[j + 2])
				{
					a.push_back(3);
					a.push_back(prev[j]);
					j += 3;
				}
				else if (prev[j] == prev[j + 1])
				{
					a.push_back(2);
					a.push_back(prev[j]);
					j += 2;
				}
				else
				{
					a.push_back(1);
					a.push_back(prev[j]);
					j += 1;
				}
			}
			else if (j + 1 < prev.size())
			{
				if (prev[j] == prev[j + 1])
				{
					a.push_back(2);
					a.push_back(prev[j]);
					j += 2;
				}
				else
				{
					a.push_back(1);
					a.push_back(prev[j]);
					j += 1;
				}
			}
			else {
				a.push_back(1);
				a.push_back(prev[j]);
				j += 1;
			}
		}
		prev = a; // add p
	}
	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i];
	}
}