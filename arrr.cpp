#include "arrr.h"

double** allocate_arr(int row, int column) {
	//������� ������ � ���������� ��� �������
	double** arr = new double* [row];
	for (int n = 0; n < row; n++) {
		arr[n] = new double[column];
	}
	return arr;
}

double** fill_arr(int row, int column) {
	//������� ������ � ��������� ���������� ������� ������
	double** arr = allocate_arr(row, column);
	for (int n = 0; n < row; n++) {
		for (int m = 0; m < column; m++) {
			arr[n][m] = rand() % 41 + 10;
		}
	}
	return arr;
}

void print_arr(double** arr, int row, int column) {
	//������� �� �������
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++)
			std::cout << arr[i][j] << "\t";
		std::cout << "\n";
	}
}

void delete_arr(double** arr, int row, int column){
	//������� ����������
	for (int n = 0; n < row; n++) {
		delete[] arr[n];
	}
	delete[] arr;
}


