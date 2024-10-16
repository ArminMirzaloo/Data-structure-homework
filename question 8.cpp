// question 7
#include <iostream>
using namespace std;
void TruthTable(int* , int , int ); 	// prototype function

int main() {
    int n; 	// the size of truthTable
    cin >> n;

    int arr[n];
    
    generateTruthTable(arr, n, 0);

    return 0;
}

void TruthTable(int* array, int n, int current) { // this function print truthTable for your input size
    if (current == n) {		// initial state
        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";	 // print rows of truthTable
        }
        cout << endl;
        return;
    }

    arr[current] = 0;
    generateTruthTable(array, n, current + 1);		// recursive part with false value

    arr[current] = 1;
    generateTruthTable(array, n, current + 1);		// recursive part for true value
}
