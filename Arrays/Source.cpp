#include<iostream>
using namespace std;

//#define MIN_MAX_VAR1
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3,5,8 };
	//arr[2] = 123;
	//cout << arr[2] << endl;

	//ввод элементов массива с клавиатуры
	cout << "Введите элементы массива(" << n << " шт.):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	//вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


	//Вывод массива на экран в обратном порядке

	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	// суммы элементов массива
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	cout << s << endl;
	cout << "Среднее-арефметическое элементов массива: " << (double)s / n << endl;

	//поиск минимального и максимального значения
#ifdef MIN_MAX_VAR1
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{

		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];

	}
	cout << "Минимальное и максимальное" << min << ", " << max << endl;
}
#endif // DEBUG
