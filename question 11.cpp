// question 11
#include <iostream>
using namespace std;
void coins(int , int , int , int , int );		// prototype function

int main() {
	
	cout << "2 $" << "    " << "5 $" << "    " << "10 $";		// head of coins table
	cout << endl;
    
    coins(20 , 0 , 0 , 0 , 0);		// calling function with const numbers

    return 0;
}

void coins(int n , int current , int n2 , int n5 , int n10) {		// coins function print numbers of diffrent coins for us
	if (current == n) {			// The correct condition of the function
		cout << n2 << "	" << n5 << "      " << n10;
		cout << endl;
		return;
	}
	
	if (current > n)	// The incorrect condition of the function
		return;
	
	coins(n , current + 2 , n2 + 1 , n5 , n10); 	// Adding a $2 coin
	
	coins(n , current + 5 , n2 , n5 + 1 , n10);		// Adding a $5 coin
	
	coins(n , current + 10 , n2 , n5 , n10 + 1);	// Adding a $10 coin
}
