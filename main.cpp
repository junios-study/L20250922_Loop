//#include <iostream> //cpp standard
//#include <conio.h> //c standard
//
//using namespace std;
//
//int World[10][10] =
//{
//	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
//	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
//};
//
//bool bIsRunning = true;
//
//int PlayerX = 1;
//int PlayerY = 1;
//char PlayerShape = 'P';
//
////사상(Mapping)
//char Sprites[10] = { ' ', '*', }; //그림으로 바꾸자.
//
//int KeyCode;
//
//void Input()
//{
//	KeyCode = _getch();
//
//	return;
//}
//
//void Process()
//{
//	if (KeyCode == 'w')
//	{
//		PlayerY--;
//	}
//	else if (KeyCode == 's')
//	{
//		PlayerY++;
//	}
//	else if (KeyCode == 'a')
//	{
//		PlayerX--;
//	}
//	else if (KeyCode == 'd')
//	{
//		PlayerX++;
//	}
//	else if (KeyCode == 'q')
//	{
//		bIsRunning = false;
//	}
//}
//
//void Render()
//{
//	system("cls");
//	for (int Y = 0; Y < 10; ++Y)
//	{
//		for (int X = 0; X < 10; ++X)
//		{
//			if (PlayerX == X && PlayerY == Y)
//			{
//				cout << PlayerShape;
//			}
//			else //other
//			{
//				cout << Sprites[World[Y][X]];
//			}
//
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	//frame, deltaseconds
//	while (bIsRunning)
//	{
//		Input();
//		Process();
//		Render();
//	}
//
//	return 0;
//}
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//char Greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	//char Greeting[6] = "Hello";

	string Greeting1 = "Hello";
	string Gretting2 = "World";

	//'H' != 'H', '\0'
	
	cout << (Greeting1 + " " + Gretting2) << endl;

}
