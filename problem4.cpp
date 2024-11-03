#include <iostream>
using namespace std;

int digitSum(int num) {
    if (num == 0) {
        return 0;
    }else {
        return num % 10 + digitSum(num / 10);
    }
}
// num=634  4+digitsum(63)= 4+3+digtisum(6)= 4+3+6+digitsum(0)= 4+3+6+0
int main() {
    int num;
    cin >> num;
    cout << digitSum(num);
    return 0;

}