#include<bits/stdc++.h>
using namespace std;
int count(int n){
    int cnt=0;
    while (n>0)
    {
        cnt=cnt+1;
        n=n/10;
    }
    return cnt;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Number of digits: " << count(num) << endl;
    return 0;
}