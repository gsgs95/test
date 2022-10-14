#include <iostream>
using namespace std;

void InitRandomSeed()
{
	srand(time(NULL));
}

int ChooseRandomNumber(int RandomMin, int RandomMax) // Min~Max 까지 랜덤넘버 생성
{
	return rand() % (RandomMax - RandomMin) + RandomMin;
}

int main(void)
{
	
	int FirstMax = 10;
	int SecondMax = 20;

	int* SmallBox = new int[FirstMax];

	InitRandomSeed();

	for (int i = 0; i < FirstMax; ++i)
	{
		SmallBox[i] = ChooseRandomNumber(1, FirstMax);
	}

	cout << "First Run " << endl;
	for (int i = 0; i < FirstMax; ++i)
	{
		cout << "SmallBox[" << i << "] = " << SmallBox[i] << endl;
	}
	cout << endl;

	int* LargeBox = new int[SecondMax];
	for (int i = 0; i < FirstMax; ++i)
	{
		LargeBox[i] = SmallBox[i];
	}

	delete[] SmallBox;

	SmallBox = LargeBox;


	for (int i = FirstMax; i < SecondMax; ++i)
	{
		SmallBox[i] = ChooseRandomNumber(FirstMax + 1, SecondMax);
	}

	cout << "Second Run " << endl;

	for (int i = 0; i < SecondMax; ++i)
	{
		cout << "SmallBox[" << i << "] = " << SmallBox[i] << endl;
	}

	delete[] LargeBox;

	return 0;
}