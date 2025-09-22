#include <iostream> //cpp standard
#include <conio.h> //c standard
#include <vector>
#include <algorithm>


using namespace std;

//**********
//*        *
//*        *
//*        *
//*        *
//*        *
//*        *
//*        *
//*        * 
//**********
int main()
{
	int World[100][100] =
	{
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};

	bool bIsRunning = true;

	int PlayerX = 1;
	int PlayerY = 1;
	char PlayerShape = 'P';

	//사상(Mapping)
	char Sprites[10] = { ' ', '*', }; //그림으로 바꾸자.

	while (bIsRunning)
	{
		//Input
		int KeyCode = _getch();

		//Process
		if (KeyCode == 'w')
		{
			PlayerY--;
		}
		else if (KeyCode == 's')
		{
			PlayerY++;
		}
		else if (KeyCode == 'a')
		{
			PlayerX--;
		}
		else if (KeyCode == 'd')
		{
			PlayerX++;
		}
		else if (KeyCode == 'q')
		{
			bIsRunning = false;
		}

		//Render();
		system("cls");
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << PlayerShape;
				}
				else //other
				{
					cout << Sprites[World[Y][X]];
				}

			}
			cout << endl;
		}
	}

	return 0;
}