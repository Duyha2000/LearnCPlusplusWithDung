#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int tests[5];

    for (int i = 0; i < 5; i++) {
        int number;
        cin >> number;
        tests[i] = number;
    }
    // B1: Sắp xếp array giảm dần
    // B2: Phần tử lớn nhất là phần tử đầu tiên
    // B3: tìm phần tử nhỏ hơn phần tử đầu, nó sẽ là phần tử lớn thứ 2
    sort(tests, tests + 5, greater<int>());
    // -> 18 10 9 8 1
    int larger2nd = tests[0]; // 18
    for (int number: tests) {
        // so sánh 18 với 10
        if (number < larger2nd) {
            larger2nd = number;
            break;
        }
    }
    cout << larger2nd;


    return 0;
}