//sorting time
#include "sort.h"
bool Sort::Bubblesort(int *arr,int size){
  for(int i = 0;i < size-1;++i){
    for(int j = 0;j < size-i-1;++j){
       if (arr[j] > arr[j+1]){
         int temp = arr[j];
         arr[j] = arr[j+1];
         arr[j+1] = temp;
       }
    }
  }
  return true;
}

bool Sort::Quicksort(int *arr, int lowIndex, int highIndex){
  if(lowIndex >= highIndex){
    return true;
  }
  int part = partition(arr, lowIndex, highIndex);
  Quicksort(arr,lowIndex,part);
  Quicksort(arr,part+1,highIndex);
  return true;
}

int Sort::partition(int *arr, int lowIndex, int highIndex){
  int val = arr[lowIndex];
  int i = lowIndex;

  for(int j = lowIndex+1; j<highIndex;++j){
    if(arr[j]<=val){
      i++;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  int temp = arr[i];
  arr[i] = arr[lowIndex];
  arr[lowIndex] = temp;
  return i;
}

bool Sort::Mergesort(int *arr,int i,int k){
  int j = 0;

  if(i<k){
    j =(i+k)/2;

    Mergesort(arr, i, j);
    Mergesort(arr, j+1, k);
    Merge(arr, i, j, k);
  }
  return true;
}

bool Sort::Merge(int *arr, int i, int j, int k){
  int mergedSize = k-i+1;
  int mergePos = 0;
  int leftPos = i;
  int rightPos = j+1;
  int *mergedNumbers;
  mergedNumbers = new int[mergedSize];

  while(leftPos<=j && rightPos<=k){
    if(arr[leftPos]<=arr[rightPos]){
      mergedNumbers[mergePos] = arr[leftPos];
      leftPos++;
    } else{
      mergedNumbers[mergePos] = arr[rightPos];
      rightPos++;
    }
    mergePos++;
  }

  while(leftPos<=j){
    mergedNumbers[mergePos] = arr[leftPos];
    leftPos++;
    mergePos++;
  }

  while(rightPos <= k){
    mergedNumbers[mergePos] = arr[rightPos];
    rightPos++;
    mergePos++;
  }

  for(mergePos = 0; mergePos<mergedSize; ++mergePos){
    arr[i+mergePos] = mergedNumbers[mergePos];
  }
  return true;
}

bool Sort::Selectionsort(int *arr, int size){
  int indexSmallest = 0;

  for(int i = 0;i<size-1;++i){
    indexSmallest = i;
    for(int j = i+1; j<size;++j){
      if(arr[j]<arr[indexSmallest]){
        indexSmallest = j;
      }
    }

    int temp = arr[i];
    arr[i] = arr[indexSmallest];
    arr[indexSmallest] = temp;
  }
  return true;
}

bool Sort::Insertionsort(int *arr, int size){
  for(int i = 1; i<size; ++i){
    int j = i;
    while(j>0 && arr[j]<arr[j-1]){
      int temp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] =temp;
      j--;
    }
  }
  return true;
}

bool Sort::isSorted(int *arr, int size){
  for(int i = 0; i<size-1;++i){
    if(arr[i]>arr[i+1]){
      return false;
    }
  }
  return true;
}
