// question 1
#include <iostream>
using namespace std;

int Division(int , int); // prototype function

int main() {
    int a , b; // dividend & divisior
    cin >> a >> b;
    cout << Division(a , b);
}

int Division(int x , int y) {
    if (x < y)
        return 0;

    return 1 + Division(x-y , y); // recursive part
}