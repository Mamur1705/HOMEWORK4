#include <iostream>
using namespace std;

template <typename T>
T midValue(T x, T y, T z) {
    if((x>y && x<z) || (x<y && x>z)) { // y< x <z || z< x <y
        return x;
    }else if((y>x && y<z) || (y<x && y>z)) { // x< y <z ||
        return y;
    }else if((z>y && z<x) || (z<y && z>x)) {
        return z;
    }
}
int main() {
    char x, y, z;
    cin>>x>>y>>z;
    cout<<midValue(x, y, z);
    return 0;
}