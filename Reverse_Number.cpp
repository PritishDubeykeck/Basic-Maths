#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        int digit = n % 10;  // Extract the last digit
        reversed = reversed * 10 + digit;  // Append digit to reversed number
        n = n / 10;  // Remove the last digit from n
    }
    return reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversed = reverseNumber(num);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
