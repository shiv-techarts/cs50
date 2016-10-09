/**
*  Shiv Pratap Singh
*  22 - Sept - 2016
*  Bubble Sort - Implementation
**/

#include <iostream>

using namespace std;

template <class T>
bool bubbleSort(T* arrayOfData, int start, int end) {
	//static int count = end;
	if(start >= end)
	    return false;
	int loopCounter = 0;
	int tempStart = start;
	while (start < (end - 1)) {
		if (arrayOfData[start] > arrayOfData[start + 1]) {
			auto temp = arrayOfData[start];
			arrayOfData[start] = arrayOfData[start + 1];
			arrayOfData[start + 1] = temp;
			loopCounter++;
		}
		start++;
	}
	if (loopCounter) {
		bubbleSort(arrayOfData, tempStart, end - 1);
	}
	else {
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
	bubbleSort(arrayOfData, 0, sizeOfArray);
	for (auto i : arrayOfData) {
		cout << i << endl;
	}
	//getchar();
	return 0;
}