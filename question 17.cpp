// question 17
#include <iostream>
using namespace std;

int calculateRecursive(string s , int , int , int , int , char );		// prototype function

int main() {
    string S;
    int x, x_prime;

    cout << "Enter the expression (containing x, y and operators + - *): ";
    cin >> S;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of x': ";
    cin >> x_prime;

    int result = calculateRecursive(S, x, x_prime, 0, 0, '+');
    cout << "Result: " << result << endl;

    return 0;
}

int calculateRecursive(string s, int x, int x_prime, int index, int currentResult, char lastOp) {
    if (index == s.length()) {
        return currentResult;
    }

    if (s[index] == 'x') {
        if (lastOp == '+') {
            return calculateRecursive(s, x, x_prime, index + 1, currentResult + x, lastOp);
        } else if (lastOp == '-') {
            return calculateRecursive(s, x, x_prime, index + 1, currentResult - x, lastOp);
        } else if (lastOp == '*') {
            return calculateRecursive(s, x, x_prime, index + 1, currentResult * x, lastOp);
        }
    } else if (s[index] == 'y') {
        if (lastOp == '+') {
            return calculateRecursive(s, x, x_prime, index + 1, currentResult + x_prime, lastOp);
        } else if (lastOp == '-') {
            return calculateRecursive(s, x, x_prime, index + 1, currentResult - x_prime, lastOp);
        } else if (lastOp == '*') {
            return calculateRecursive(s, x, x_prime, index + 1, currentResult * x_prime, lastOp);
        }
    } else if (s[index] == '+' || s[index] == '-' || s[index] == '*') {
        return calculateRecursive(s, x, x_prime, index + 1, currentResult, s[index]);
    }

    return currentResult;
}