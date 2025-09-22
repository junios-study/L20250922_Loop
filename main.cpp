#include <iostream>

using namespace std;

//entry 
int main()
{
	int Number = 0;
	int Sum = 0;

	for (int i = 1; i <= 100; i++) 
	{
		Sum += i;
	}

	cout << Sum << endl;
	
	Sum = 0;
	for (int i = 3; i <= 100; i+=3)
	{
		Sum += i;
	}

	cout << Sum << endl;

	return 0;
}