// question 5
#include <iostream>
using namespace std;
int Max = -1000000;		// global Negative infinite number for the comparison operation in the function
int max(int* , int );	// prototype function

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
    	cin >> arr[i];
	}
	
	cout << max(arr , n);	// calling max function

    return 0;
}
int max(int* array, int size) {    // max function for find the biggest number in array and return it
	if (size == 0)		// initial state
		return Max;
		
	if (array[size - 1] > Max) 
		Max = array[size - 1];
		
	max(array , size - 1);  	// recursive part of function
}