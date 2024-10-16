// question 7
#include <iostream>
using namespace std;
int k = 1;		// global number to save the greatest common denominator in function
int bmm(int , int , int );

int main() {
    int a , b;
    cin >> a >> b;
    int mux = 1;
    if (a >= b)
    	cout << bmm(a , b , mux) << endl;
    
    else
    	cout << bmm(b , a , mux) << endl;

    return 0;
}
int bmm(int x , int y , int Bmm) {
	if (Bmm > y) 	// initial state
		return k;
		
	if (x % Bmm == 0  &&  y % Bmm == 0) 	// check the Bmm number is correct or not
		k = Bmm;
	
	bmm(x , y , ++Bmm);		// recursive part of function	
}