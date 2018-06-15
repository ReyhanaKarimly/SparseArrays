#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include<algorithm>
using namespace std;
void main()
{
	int N, Q;
	cin >> N;
	vector<string>s;
	string el;
	for (size_t i = 0; i < N; i++)
	{
		cin >> el;
		s.push_back(el);

	}
	cin >> Q;
	vector<string>s2;
	for (size_t i = 0; i < Q; i++)
	{
		cin >> el;
		s2.push_back(el);

	}
	int count = 0;
	for (size_t i = 0; i < s2.size(); i++)
	{

		for (size_t j = 0; j < s.size(); j++)
		{
			if (s2[i] == s[j])
				count++;

		}
		cout << count << endl;
		count = 0;

	}
	

	system("pause");
}