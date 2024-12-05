#include <iostream>

using namespace std;

// Function: biến gì thay đổi được sẽ viết vào tham số trong hàm (number)
// Function để xử lý logic (không phải để input)
int occurrences(int arr[], int sizeArr, int number) {
    int count = 0;
    for (int i = 0; i < sizeArr; i++) {
        if (number == arr[i])
            count++;
    }
    return count;
}

// Bài tập: Cho 1 array có n phần tử và giá trị X. Viết 1 function trả về vị trí đầu tiên mà phần tử trong array bằng X, nếu không có trả về -1
int main() {
// Input, gọi hàm, output:
    int sizeArr;
    cin >> sizeArr;
    int arr[sizeArr]; // mới khởi tạo
    int number;
    cin >> number;
    // i < size (không bằng được, index start from 0 - to size - 1)
    for (int i = 0; i < sizeArr; i++) {
        int numberArr;
        cin >> numberArr;
        arr[i] = numberArr;
    }

    number = occurrences(arr, sizeArr, number);
    cout << number;
    return 0;
}


