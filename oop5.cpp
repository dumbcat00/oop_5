#include "arrr.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int row, column;
	cout << "Размерность массива (два положительных числа):\n";
	cin >> row >> column;
	cout << endl;

	//проверка на ошибки
	if (row <= 0 || column <= 0)
		cout << "Ошибочка вышла. Размерность массива - два положительных числа." << endl;
	else {

		cout << "Заполненнный числами от 10 до 50 массив:"<<endl;
		double** arr1 = fill_arr(row, column);
		print_arr(arr1, row, column);
		delete_arr(arr1, row, column);

	}
	return 0;
}