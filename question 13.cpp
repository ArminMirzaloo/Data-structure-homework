// question 13
#include <iostream>
using namespace std;


void moveDisks(int , char , char , char );

int main() {
    int n;  	// Number of disks
    cin >> n;

    moveDisks(n, 'S', 'D', 'A'); 	// S = Source, D = Destination, A = Auxiliary

    return 0;
}

void moveDisks(int n , char source , char destination , char auxiliary) {		// Function to move disks
    
    if (n == 1) {		// Base case: If only 1 disk, just move it from source to destination
        cout  << source << " -> " << destination << endl;
        return;
    }

    
    moveDisks(n - 1 , source , auxiliary , destination);		// Move n-1 disks from source to auxiliary using destination as a helper

    
    cout << source << " -> " << destination << endl;		// Move the nth (largest) disk from source to destination

    
    moveDisks(n - 1, auxiliary, destination, source);		// Move the n-1 disks from auxiliary to destination using source as a helper
}