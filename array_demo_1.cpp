#include <iostream>
using namespace std;

int main()
{
	int x, i;

	cout << "How many values do you want to enter?";
	cin >> x;
	int arr[x];

	for (i = 0; i < x; i++)
	{
		cout << "Enter the marks of student:" << endl;
		cin >> arr[i];
	}
	cout << arr[i];

	return 0;
}