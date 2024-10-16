// question 2
#include <iostream>
using namespace std;
float avg(int* , int ); // prototype function

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) { // input the members of array
        cin >> arr[i];
    }
    cout << avg(arr , n) / n << endl; // print the result

    return 0;
}
float avg(int* array , int size) { // avg ( it means average) function calculates the sum of all numbers in your array
    if (size == 0) // initial state
        return 0;
    if (size == 1) // initial state
        return array[0];
    return array[size - 1] + avg(array , size - 1); // recursive part of avg function
}