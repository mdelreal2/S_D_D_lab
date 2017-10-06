#include <iostream>

using namespace std;

void power(int base, int exponent);

int main()
{
	power(5.1, 3);
	power(5.5, 0)


	system("pause");
	return 0;
}

void power(float base, int exponent)
{
	int result = base;
	for (int i = 1; i < exponent; i++)
	{
		result *= base;
	}
	if (exponent == 0)
	{
		result = 1;
	}
	cout << result << endl;
}
