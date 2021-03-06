//main.cpp
//Patrick Polcuch
//2348668
//CPSC350Assignment5

//Used to test sorting algorithms and display their run times
#include <fstream>
#include <sstream>
#include <time.h>
#include "sort.h"

int main(int argc,char** argv){
  ifstream NumbersFile;
  NumbersFile.open(argv[1]);
  if(!NumbersFile){//file was not sucessfuly opened
    cout<<"Couldn't open file"<<endl;
    return 1;
  }
  string curentLine;
  if(!getline(NumbersFile,curentLine)){
    cout<<"The file is empty, I think"<<endl;
    return 1;
  }
  stringstream intArraySize(curentLine);
  int arraySize;
  intArraySize>>arraySize;

  int *Quickarray = new int[arraySize];
  int *Mergearray = new int[arraySize];
  int *Selectionarray = new int[arraySize];
  int *Insertionarray = new int[arraySize];
  int *Bubblearray = new int[arraySize];//There is probably a better way to do this

  for(int i = 0;i<arraySize;++i){//fills the arrays
    if(!getline(NumbersFile,curentLine)){
      cout<<"Not enough numbers in the file"<<endl;
      return 1;
    }
    stringstream intnextNum(curentLine);
    int nextNum;
    intnextNum>>nextNum;
    Quickarray[i] = nextNum;
    Mergearray[i] = nextNum;
    Selectionarray[i] = nextNum;
    Insertionarray[i] = nextNum;
    Bubblearray[i] = nextNum;
  }

  time_t start;
  time_t end;

  start = time(NULL);//to get starting time
  Sort::Quicksort(Quickarray,0,arraySize);
  end = time(NULL);//to get the ending time
  int seconds = (int)difftime(end,start);//calc how much time the algorithm took
  cout<<"Quick Sort:      "<<seconds/3600<<":"<<(seconds%3600)/60<<":"<<(seconds%3600)%60<<endl;//display Hours:Minutes:Seconds

  start = time(NULL);//same as above
  Sort::Mergesort(Mergearray,0,arraySize-1);
  end = time(NULL);
  seconds = (int)difftime(end,start);
  cout<<"Merge Sort:      "<<seconds/3600<<":"<<(seconds%3600)/60<<":"<<(seconds%3600)%60<<endl;

  start = time(NULL);
  Sort::Selectionsort(Selectionarray,arraySize);
  end = time(NULL);
  seconds = (int)difftime(end,start);
  cout<<"Selection Sort:  "<<seconds/3600<<":"<<(seconds%3600)/60<<":"<<(seconds%3600)%60<<endl;

  start = time(NULL);
  Sort::Insertionsort(Insertionarray,arraySize);
  end = time(NULL);
  seconds = (int)difftime(end,start);
  cout<<"Insertion Sort:  "<<seconds/3600<<":"<<(seconds%3600)/60<<":"<<(seconds%3600)%60<<endl;

  start = time(NULL);
  Sort::Bubblesort(Bubblearray,arraySize);
  end = time(NULL);
  seconds = (int)difftime(end,start);
  cout<<"Bubble Sort:     "<<seconds/3600<<":"<<(seconds%3600)/60<<":"<<(seconds%3600)%60<<endl;

  return 1;
}
