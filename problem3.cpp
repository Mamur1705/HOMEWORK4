#include <iostream>
using namespace std;

int multiply(int a, int b) {
    if (b==0) {
        return 0;
    }else return a+multiply(a,b-1);
}
// a=5 b=4  5+sum(5, 3)= 5+5+sum(5, 2)= 5+5+5+sum(5, 1)= 5+5+5+5+sum(5, 0)= 5+5+5+5+0
//
int main() {
    int a, b;
    cin>>a>>b;
    cout<<multiply(a,b);
}