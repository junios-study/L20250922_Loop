#include <iostream>

using namespace std;

//*****
// ****
//  ***
//   **
//    *
int main()
{
	int Number[10] = { 0, };

	int Count = 0;
	cin >> Count;

	for (int i = 1; i <= Count; ++i)
	{
		//for (int j = 1; j < i; ++j)
		//{
		//	cout << " ";
		//}

		for (int j = 1; j <= Count; ++j)
		{
			if (i > j)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << "\n";
	}

	return 0;
}