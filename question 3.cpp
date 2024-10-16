// question 3
#include <iostream>
using namespace std;
void rev(int* , int ); // prototype function

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rev(arr , n);   // calling the rev function

    return 0;
}
void rev(int* array , int size) {   // this function revers numbers of your arrays
    if (size == 0)  // initial state
        return;

    else
        cout << array[size - 1] << endl;

    rev(array , size - 1);  // recursive part of rev function
}
