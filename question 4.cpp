// question 4
#include <iostream>
using namespace std;
void base2(int* , int , int );	// prototype function

int main() {
    int n;
    cin >> n;
    int n2 = n;
    int size = 0;
    while (n2 > 0) {
        n2 /= 2;
        size++;
    }
    int arr[size];	// make array that its size is logarithm number n in base 2
    base2(arr , n , size);
    
	for (int i = 0; i < size; i++)
		cout << arr[i];	   // print members of array

    return 0;
}
void base2(int* array , int number , int size) {	// base2 function fills an array from the remainder of successive divisions of n by 2
    if (size == 0)	  // initial state
            return;
            
    array[size - 1] = number % 2;
    
    base2(array , number / 2 , size - 1);	// recursive part of function
}
