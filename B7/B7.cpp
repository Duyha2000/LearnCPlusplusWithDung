#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number = 1;
    // ko Có bước nhập
    // em cứ cho lăặp -> đến khi nào không thỏa mãn (tìm được số đấy) -> break;
    while (true) {
        if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0) {
            cout << number;
            break;
        }
        // steps
        number++;
    }

// in ra 1 2 3 -- 5 6 7 8 9

// in ra 0 2 4 6 8 (even number)
    for (int i = 1; i <= 5; i++) cout << i << " ";

    for (int i = 0; i <= 8; i++) {
//        if (i % 2 == 0) cout << i << " ";
        if (i % 2 != 0) continue;
        cout << i << " ";
    }
// continue: bo qua:
//    for (int i = 1; i <= 9; i++) {
////        if (i != 4) cout << i << " ";
//        if (i == 4) continue;
//        cout << i << " ";
//    }


    return 0;
}