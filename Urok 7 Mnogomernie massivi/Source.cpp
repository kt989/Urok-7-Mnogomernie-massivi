#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
using std:: cout;
using std::cin;
using std::endl;
//#define zadacha_1
//#define zadacha_2
//#define zadacha_3
//#define zadacha_4
//#define zadacha_5
//#define zadacha_6
//#define zadacha_7
//#define zadacha_8
//#define zadacha_9
//#define zadacha_10
//#define zadacha_11
#define zadacha_12

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

#ifdef zadacha_1


	int array[10][10];
	for (int i = 0;i < 10;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			array[i][j] = rand() % 100;
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;


	int element;
	for (int i = 0;i < 10;i++)
	{
		int element_max = 0;
		int element_min = 100;
		for (int j = 0;j < 10;j++)
		{
			element = array[i][j];
			if (element > element_max) element_max = element;
			if (element < element_min) element_min = element;
		}
		cout << "ћаксимальное значение строки " << i << " составл€ет " << element_max << endl;
		cout << "ћинимальное значение строки " << i << " составл€ет " << element_min << endl << endl;
	}
#endif // zadacha_1

#ifdef zadacha_2
	int array[3][4];
	int sum = 0;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			array[i][j] = rand() % 10;
			cout << array[i][j] << "\t";
			if (array[i][j] == 0) sum++;
		}
		cout << endl << endl;
	}
	cout << endl << " оличество элементов равных 0 составл€ет " << sum << endl;

#endif // zadacha_2

#ifdef zadacha_3

	int array[5][5];
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if (j >= i)
			{
				array[i][j] = rand() % 10;
				if (max < array[i][j]) max = array[i][j];
			}
			else array[i][j] = 10;
			cout << array[i][j] << "\t";
			
		}
		cout << endl << endl;
	}
	cout << endl << "ћаксимальное значение в заданной области равно " << max << endl << endl;
#endif // zadacha_3а


#ifdef zadacha_4

	int array[5][5];
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if (j <= i)
			{
				array[i][j] = rand() % 10;
				if (max < array[i][j]) max = array[i][j];
			}
			else array[i][j] = 10;
			cout << array[i][j] << "\t";
			
		}
		cout << endl << endl;
	}
	cout << endl << "ћаксимальное значение в заданной области равно " << max << endl << endl;
#endif // zadacha_4б

#ifdef zadacha_5

	int array[5][5];
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if ((j >= i) && (j < 5 - i))
			{
				array[i][j] = rand() % 10;
				if (max < array[i][j]) max = array[i][j];
			}
			else array[i][j] = 10;
			cout << array[i][j] << "\t";
			
		}
		cout << endl << endl;
	}
	cout << endl << "ћаксимальное значение в заданной области равно " << max << endl << endl;
#endif // zadacha_5в

#ifdef zadacha_6

	int array[5][5];
	int max = 0;
	for (int i = 0;i <5;i++)
	{
		for (int j = 0;j <= 4;j++)
		{
			if ((j <= i)&&(j>=4-i))
			{
				array[i][j] = rand() % 10;
				if (max < array[i][j]) max = array[i][j];
			}
			else array[i][j] = 10;
			cout << array[i][j] << "\t";

		}
		cout << endl << endl;
	}
	cout << endl << "ћаксимальное значение в заданной области равно " << max << endl << endl;
#endif // zadacha_6г

#ifdef zadacha_7

	int array[5][5];
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j <= 4;j++)
		{
			if ((j <= i) && (j >= 4 - i))
			{
				array[i][j] = rand() % 10;
				if (max < array[i][j]) max = array[i][j];
			}
			else if ((j >= i) && (j < 5 - i))
			{
				array[i][j] = rand() % 10;
				if (max < array[i][j]) max = array[i][j];
			}
			else array[i][j] = 10;
			cout << array[i][j] << "\t";

		}
		cout << endl << endl;
	}
	
	cout << endl << "ћаксимальное значение в заданной области равно " << max << endl << endl;
#endif // zadacha_7д

#ifdef zadacha_8

	int array[5][5];
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if ((i <= j) && (i >= 4 - j))
			{
				array[i][j] = rand() % 10;
				if (max < array[i][j]) max = array[i][j];
			}
			else if ((i >= j) && (i < 5 - j))
			{
				array[i][j] = rand() % 10;
				if (max < array[i][j]) max = array[i][j];
			}
			else array[i][j] = 10;
			cout << array[i][j] << "\t";

		}
		cout << endl << endl;
	}
	cout << endl << "ћаксимальное значение в заданной области равно " << max << endl << endl;
#endif // zadacha_8e

#ifdef zadacha_9

	int array[5][5];
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if ((i >= j) && (i < 5 - j))
			{
				array[i][j] = rand() % 10;
				if (max < array[i][j]) max = array[i][j];
			}
			else array[i][j] = 10;
			cout << array[i][j] << "\t";

		}
		cout << endl << endl;
	}
	cout << endl << "ћаксимальное значение в заданной области равно " << max << endl << endl;
#endif // zadacha_9ж

#ifdef zadacha_10

	int array[5][5];
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if ((i <= j) && (i >= 4-j))
			{
				array[i][j] = rand() % 10;
				if (max < array[i][j]) max = array[i][j];
			}
			else array[i][j] = 10;
			cout << array[i][j] << "\t";

		}
		cout << endl << endl;
	}
	cout << endl << "ћаксимальное значение в заданной области равно " << max << endl << endl;
#endif // zadacha_10з

#ifdef zadacha_11

	int array[5][5];
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if (i <= 4-j)
			{
				array[i][j] = rand() % 10;
				if (max < array[i][j]) max = array[i][j];
			}
			else array[i][j] = 10;
			cout << array[i][j] << "\t";

		}
		cout << endl << endl;
	}
	cout << endl << "ћаксимальное значение в заданной области равно " << max << endl << endl;
#endif // zadacha_11и

#ifdef zadacha_12

	int array[5][5];
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if (i >= 4 - j)
			{
				array[i][j] = rand() % 10;
				if (max < array[i][j]) max = array[i][j];
			}
			else array[i][j] = 10;
			cout << array[i][j] << "\t";

		}
		cout << endl << endl;
	}
	cout << endl << "ћаксимальное значение в заданной области равно " << max << endl << endl;
#endif // zadacha_12k
}