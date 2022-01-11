#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<string> A;
	string a;
	getline(cin, a);
	stringstream C(a);
	string b;
	while (!C.eof())
	{
		C >> b;
		A.push_back(b);
	}
	string B;
	cin >> B;
	for (int i = 0; i <= A.size(); i++)
	{
		if (A[i] != B)
			cout << A[i] << " ";
	}
}