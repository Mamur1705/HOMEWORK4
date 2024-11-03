#include <iostream>
using namespace std;

int floorFunction(float n) {
    int f=n;
    if(n<f) {
        f--;
    }
    return f;
}
int ceilingFunction(float n) {
    int c=n;
    if(n>c) {
        c++;
    }
    return c;
}

int main() {
    cout<<floorFunction(-1.1)<<endl;
    cout<<ceilingFunction(-1.1)<<endl;
}