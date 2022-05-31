#pragma once
#include <iostream>
#include <ctime>
using namespace std;

double** allocate_arr(int, int);
double** fill_arr(int, int);
void print_arr(double**, int, int);
void delete_arr(double**, int, int);

