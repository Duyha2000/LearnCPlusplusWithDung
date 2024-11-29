#include <iostream>
#include <algorithm>

using namespace std;


int LT() {
    // int a b c d e
    // sum = a+b+c+ d+ e
    // khai bao array:
//    C1:
    int tests[] = {1, 2, 3, 4, 5};
//    index start 0 -> 4 (size-1)
// Size array:
    int size = sizeof(tests) / sizeof(tests[0]);

    cout << size;
    cout << tests[2];
//     C2: [- - - - -]
// Cho 1 arr n phan tu
    int n;
    cin >> n;
    int tests1[n];
//    int number1;
//    cin >> number1;
//    tests[0] = number1;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        tests1[0] = number;
    }
//    for each - for i (index)
    for (int i = 0; i < n; i++) {
//
    }

    for (int test1: tests1) {
        cout << test1;
    }
//    int sum a= 0
    // Vector:


    return 0;
}