#include <iostream>

using namespace std;

int main()
{
	char c;
	cout << "Enter one symbol" << endl;
	cin >> c;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << c;
		}
		cout << endl;
	}
}