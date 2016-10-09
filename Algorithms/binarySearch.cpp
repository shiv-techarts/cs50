/**
 *  Shiv Pratap Singh
 *  22 - Sept - 2016
 *  Binary Search - Implementation
**/

#include <iostream>

using namespace std;

template <class T>
bool binarySearch(T* arrayOfData, const T key, int min, int max) {
    if (max < min) {
        return false;
    }
    else {
        int midPoint = ((min + max)/2);
        //cout << arrayOfData[midPoint] << endl;
        if (key < arrayOfData[midPoint]) {
            binarySearch(arrayOfData, key, min, midPoint - 1);
        }
        else if (key > arrayOfData[midPoint]) {
            binarySearch(arrayOfData, key, midPoint + 1, max);
        }
        else
            return true;
    }
    //return false;
}

int main() {
    int arrayOfData[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int toFind = 9;
    int sizeOfArray = 10;
    //string arrayOfData[] = {"Aditya", "Anand", "Rakesh", "Shiv", "Sumit", "Zayed"};
    //string toFind = "Shiv";
    //int sizeOfArray = 6;
    cout << (binarySearch(arrayOfData, toFind, 0, sizeOfArray)? "Found" : "Not Found") << endl;
    
    return 0;
}