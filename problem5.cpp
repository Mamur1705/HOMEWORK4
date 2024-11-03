#include <iostream>
using namespace std;

int decimalToBinary(int n) {
    if(n==0) {
        return 0;
    }else return n%2+10*decimalToBinary(n/2);
}
// n=20 0+10*dec(10)= 0+10*(0+10*dec(5))=0+10*(0+10*(1+10*dec(2)))
// = 0+10*1010=10100
int main() {
    int n;
    cin >> n;
    cout << decimalToBinary(n);
    return 0;
}