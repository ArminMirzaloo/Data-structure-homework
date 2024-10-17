// question 14
#include <iostream>
using namespace std;
void moveDisks(int , char , char , char );		// prototype function

int main() {
    int n;  	// Number of disks
    cin >> n;

    moveDisks(n, 'S', 'D', 'A');     // S = Source, D = Destination, A = Auxiliary

    return 0;
}

void moveDisks(int n, char source, char destination, char auxiliary) {		// Function to move disks without disk numbers
    
    if (n == 1) {		// base case for n = 1
        cout << source << " -> " << auxiliary << endl;
        cout << auxiliary << " -> " << destination << endl;
        return;
    }

    
    if (n == 2) {		// second base case for n = 2
        cout << source << " -> " << auxiliary << endl;
        cout << auxiliary << " -> " << destination << endl;
        cout << source << " -> " << auxiliary << endl;
        cout << destination << " -> " << auxiliary << endl;
        cout << auxiliary << " -> " << source << endl;
        cout << auxiliary << " -> " << destination << endl;
        cout << source << " -> " << auxiliary << endl;
        cout << auxiliary << " -> " << destination << endl;
        return;
    }


    moveDisks(n - 1, source, auxiliary, destination); 		// Move n-1 disks to auxiliary (recursive part)
    cout << source << " ? " << destination << endl;
    moveDisks(n - 1, auxiliary, destination, source);	    // Move n-1 disks to destination (recursive part)
}
