#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string str;
	int counter;
	vector<string> V;

	cout << "Enter strings: " << endl;
	while (cin >> str)
		V.push_back(str);

	sort(V.begin(), V.end());

	for (int i = 0; i < V.size(); i++)
		cout << V[i] << " ";

	return 0;
}