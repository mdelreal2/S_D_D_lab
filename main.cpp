#include <iostream>

using namespace std;

void square(int n);

int main()
{
	square(5);


	system("pause");
	return 0;
}

void square(int n)
{
	cout << n * n << endl;
}
