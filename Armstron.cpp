#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    string digits = to_string(n);
    int digitcount = digits.size();
    int num = n;
    int r = 0;
    int pal = 0;
    while (n > 0) {
        r = n % 10;
        pal = pow(r, digitcount) + pal;
        n = n / 10;
    }
    return pal == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
