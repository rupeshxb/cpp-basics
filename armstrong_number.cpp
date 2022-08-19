/* Check if the number is armstrong or not. Armstrong number is equal to the sum of its digit raised to the power of 3 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num, i, rem, quo, originalNum, total = 0;
	cout << "Enter a number: \n";
	cin >> num;
	originalNum = num;

	while (num > 0)
	{
		rem = num % 10;
		quo = num / 10;
		num = quo;
		total += pow(rem, 3);
	};

	cout << "Total is: " << total << endl;

	if (total == originalNum)
	{
		cout << "The number is armstrong number. \n";
	}

	return 0;
}