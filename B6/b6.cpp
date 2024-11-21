//#include <bits/stdc++.h>
//
//using namespace std;
//
//
//// Khai báo function
//// return type + function name (parameter1...){}
//// parameter: 1 cái biến có khả năng thay đổi giá trị(input)
//void printNumber(int n) {
//    for (int i = 1; i <= n; i++) {
//        cout << i << " ";
//    }
//}
//
//// Nhập 2 số a,b và tính tổng chúng
//int sumTwoNumbers(int a, int b) {
//    return a + b;
//}
//
//// 4. Hàm in ra kết quả (cout), hàm gán giá trị : void (kh trả gì hết)
//// Viết 1 function kiểm tra số đó có phải số nguyên tố hay không?
//
//// khi hàm này được gọi sẽ trả veef 1 ố có kiểu dữ lieệu là int
//int cube(int &number) {
//    return number * number * number;
//}
//
//void cube2(int &number) {
//    cout << number * number * number;
//}
//
//double addNumbers(double &number1, double &number2) {
//    return number1 + number2;
//}
//
//int getProduct(int &number1, int &number2) {
//    return number1 * number2;
//
//}
//
//// Chẵn hoặc lẻ (true / false)
//bool result(int &number) {
//    if (number % 2 == 0)
//        return true;
//    else
//        return false;
//}
//
//int simpleInterest(int &principal, int &time, int &rate) {
//    return (principal * time * rate) / 100;
//}
//
//// Bài tập 7: Đảo ngược một số (liên quan phép /10, %10), while
//// 1234 -> 4 3 2 1
//// 1234 lafm thee nao de in ra dc so 4
//// 1234 % 10 = 4 -> in ra cai so day
//// 1234 / 10 = 123
//
//// 123 % 10 = 3 -> in ra cai so day
//// 123 / 10 = 12
//
//// While -> ko biet lap bao nhieu lan
//// em cứ nháp đi xem nó dừng lại vog lặp khi nào thì mình mới bỏ vào while(condition)
//// Bài tập: Nhập vào 1 số và tính tổng các chữ số cuả nó(1234)
//// sum = 1 + 2 + 3 + 4 = 10
//void findReverse(int &number) {
//    // a = 1234 % 10 = 4
//    // làm thế nào để t chia số đấy cho 10 để lấy được 123
//    // a++ , a+=1, a-=1, a/=2
//    while (number > 0) {
//        cout << number % 10; // 4
//        // step:
//        number /= 10;
//    }
//
//}
//
//// Input: 1234
//// sum = 0
//// B1: 1234 % 10 = 4 -> sum = 4
//// B2: 1234 / 10 = 123
//
//// B1: 123 % 10 = 3 -> sum = 4 + 3 = 7
//// B2: 123 / 10 = 12
//
//// B1: 12 % 10 = 2 -> sum = 4 + 3 + 2 = 9
//// B2: 12 / 10 = 1
//
//// B1: 1 % 10 = 1 -> sum = 4 + 3 + 2 + 1 = 10
//// B2: 1 / 10 = 0
//// ------------------
//// B1: 0 % 10 = 0 -> sum = 4 + 3 + 2 + 1 + 0 = 10
//// B2 : 0 / 10 = 0
//
//int getSum(int &number) {
//    int sum = 0;
//    // sum += ... -> store: chứa tổng các số
////    int multiply = 1;
//    // multiply*=... -> store: chứa tích các số
//    // 1234
//    while (number > 0) {
//        sum += number % 10;
//
//        //  step:
//        number /= 10;
//    }
//    return sum;
//
////    for( int i = number ; i > 0; i /= 10){
////    }
//}
//// while(condition){
//// code logic
//// step ->
//// }
//
//// in ra các số từ 1 -> 5
//void printNumber2() {
//    int a = 1;
//    while (a <= 5) {
//        cout << a << " ";
//        // step:
//        a++;
//    }
//}
//// 90% k dùng while
//
//int main() {
//    int number;
//    cin >> number;
//
//    return 0;
//}
//
//
//
///*
// * int number;
//    cin >> number;
//    findReverse(number);
// * int principal, time, rate;
//    cin >> principal >> time >> rate;
//    int simpleInterest = simpleInterest(principal, time, rate);
//            cout << simpleInterest;
//    return 0;int number;
//    cin >> number;
//    if (result(number)) {
//        cout << "Even number";
//    } else {
//        cout << "Odd number";
//        if de goi ham boolean
//
// double number1, number2;
//cin >> number1 >> number2;
//double result = addNumbers(number1, number2);
//cout << result;
//return 0;
//  int number1, number2;
//    cin >> number1 >> number2;
//    int result = getProduct(number1, number2);
//    cout << result;
//// B1: Khai báo biến và nhập dữ liệu
//// int number;
//// cin >> number;
//// cube2(number);
////    int result = cube(number);
////    cout << result;
//
////    int n;
////    cin >> n;
////    printNumber(n);
////    int a, b;
////    cin >> a >> b;
////    int result = sumTwoNumbers(a, b);
////    cout << result; */