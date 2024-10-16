// question 9
#include <iostream>
using namespace std;
int sum = 0;	// global number for last result
int sumOfFactorial(int , int );		// prototype function

int main() {
    int n;
    cin >> n;
    cout << sumOfFactorial(n , 1) << endl;

    return 0;
}

int sumOfFactorial(int x , int current) {		// this function sum 1 to x factorial numbers
	if (current > x)	// initial state
		return sum;
	
	int factorial = 1;	
	for (int i = 1; i <= current; i++) {	// factorial of current number
		factorial *= i;
	}
	sum += factorial;
	
	sumOfFactorial(x , current+1);		// recursive partof function
}