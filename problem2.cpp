#include <iostream>
using namespace  std;

void swap_values(float a, float b) {
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a = "<<b<<endl;
    cout<<"b = "<<a<<endl;
}
int main() {
    float a, b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    swap_values(a,b);
    return 0;
}