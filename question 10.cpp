// question 10
#include <iostream>
using namespace std;
float sum = 0.00;	// global number for last result
float sumOfFactorial(int , int );		// prototype function

int main() {
    int n;
    cin >> n;
    cout << sumOfFactorial(n , 1) << endl;

    return 0;
}

float sumOfFactorial(int x , int current) {		// this function sum 1 to x factorial numbers
	if (current > x)	// initial state
		return sum;
	
	float factorial = 1;	
	for (int i = 1; i <= current; i++) {	// factorial of current number
		factorial *= i;
	}
	sum += (1 / factorial);
	
	sumOfFactorial(x , current+1);		// recursive partof function
}