#include <iostream>

int* CreateMyVector(int n)
{
	int* Vector = new int[n];

	return Vector;
}

void ResizeMyVector(int* Vector, int size) // ������ ����� �ø���
{

}

void DeleteMyVector(int* Vector)
{
	delete[] Vector;
}

int main()
{


	return 0;
}