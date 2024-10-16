// question 6
#include <iostream>
using namespace std;
int mul(int , int ); // prototype fuunction

int main() {
    int a , b;
    cin >> a >> b;
    cout << mul(a , b) << endl;

    return 0;
}
int mul(int x , int y) {	// mul (it means muitiplication) adds x to itselfs for y times
	if (y == 0)		// initial state
		return 0;
		
	return x + mul(x , y - 1);		// recursive part of function
}