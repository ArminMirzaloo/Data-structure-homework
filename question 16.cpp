// question 16
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;		// global const number for maximum size of array

void generateSubsets(int set[], int subset[], int n, int index, int subsetSize);		// prototype function

int main() {
    int n;
    cin >> n;

    int set[MAX_SIZE];
    for (int i = 0; i < n; i++) {		// input your array of numbers
        cin >> set[i];
    }

    int subset[MAX_SIZE];
    generateSubsets(set, subset, n, 0, 0);		// calling recursive function
    return 0;
}

void generateSubsets(int set[], int subset[], int n, int index, int subsetSize) {		// Function to print subsets of an array
    if (index == n) {		// correct form of function
        cout << "{ ";
        for (int i = 0; i < subsetSize; i++) {
            cout << subset[i] << " ";
        }
        cout << "}" << endl;
        return;
    }

    generateSubsets(set, subset, n, index + 1, subsetSize);		// recursive part of function

    subset[subsetSize] = set[index];
    generateSubsets(set, subset, n, index + 1, subsetSize + 1);		// recursive part of function
}
