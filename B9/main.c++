#include <iostream>

using namespace std;
int global = 3;


//void value(int a, int b) {
//    int local = 5;
//    cout << global << endl;
//}
int sum(int a, int b) {
    return a + b;
}

// Overload: function  se duoc goi dua vao so luong tham so duoc truyen vao
int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a = 3, b = 4, c = 5;
    cout << sum(a, b, c);
//    cout << global << endl;
//    cout << local;
//    for (int i = 0; i < 5; i++) {
//        int pos = 5;
//    }
//    if(true){
//        int pos = 5;
//    }
//    cout << pos;

// Bin phạm vi local sẽ chỉ có tác dụng trong cặp ngoặc nhọn {} -> if, for, function
// Global:
    return 0;
}