/**
*  Shiv Pratap Singh
*  22 - Sept - 2016
*  Selection Sort - Implementation
**/

#include <iostream>

using namespace std;

template <class T>
bool selectionSort(T* arrayOfData, int start, int end) {
	
	if (start > end)
	    return false;
	else if (start == (end - 1))
	    return true;
	else {
    	bool flag = false;
        int minPos = start;
    	
    	for(int i = start + 1; i < end; i++) {
    	    if(arrayOfData[i] < arrayOfData[minPos]) {
    	        minPos = i;
    	        flag = true;
    	    }
    	}
    	if (flag) {
    	    auto temp = arrayOfData[start];
    	    arrayOfData[start] = arrayOfData[minPos];
    	    arrayOfData[minPos] = temp;
    	    selectionSort(arrayOfData, start + 1, end);
    	}
    	else
    	    return true;
	}
}

int main() {
	//int arrayOfData[] = { 11, 2, 32, 14, 46, 72, 18, 49, 10, 9 };
	//int toFind = 9;
	//int sizeOfArray = 10;
	string arrayOfData[] = {"Zayed", "Anand", "Rakesh", "Aditya", "Yogita", "Shubham"};
	//string toFind = "Shiv";
	int sizeOfArray = 6;
	selectionSort(arrayOfData, 0, sizeOfArray);
	for (auto i : arrayOfData) {
		cout << i << endl;
	}
	//getchar();
	return 0;
}