//sort.h
//Patrick Polcuch
//2348668
//CPSC350Assignment5

//my .h file for Sort.cpp
#include <iostream>
using namespace std;

class Sort{
public:
  static bool Bubblesort(int *arr, int size);
  static bool Quicksort(int *arr, int lowIndex, int highIndex);
  static int partition(int *arr, int lowIndex, int highIndex);
  static bool Mergesort(int *arr,int i,int k);//fix
  static bool Merge(int *arr, int i, int j, int k);
  static bool Selectionsort(int *arr, int size);
  static bool Insertionsort(int *arr, int size);
  static bool isSorted(int *arr, int size);
};
