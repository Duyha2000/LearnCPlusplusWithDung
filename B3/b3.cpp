// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int b3() {
//   int number;

//   do {
//     cout << "1.Print a sequence of values less than or equal to n and "
//             "calculate the sum."
//          << endl;
//     cout << "2.Print and count numbers divisible by 3 that are less than n."
//          << endl;
//     cout << "3.Check if the integer is a prime number." << endl;
//     cout << "4. Check if the integer is a perfect number." << endl;
//     cout << "5.Calculate the sum of divisors of n." << endl;
//     cout << "6.Calculate the factorial of n." << endl;
//     cout << "7.Print the reverse of n." << endl;
//     cout << "8.Print all prime numbers from 1 to n" << endl;
//     cout << "9.Exit" << endl;

//     cout << "Enter number: ";
//     cin >> number;
//     switch (number) {
//     case 1: {
//       // Khai báo thêm {} -> vì các biến tạo ra chỉ có phạm vi trong {}
//       cout << "1.Print a sequence of values less than or equal to n and "
//               "calculate the sum.";
//       int n;
//       cout << "n: ";
//       cin >> n;
//       int total = 0;
//       for (int i = 1; i <= n; i++) {
//         cout << i << " ";
//         total += i;
//         cout << "Total: " << total;
//       }
//       break;
//     }
//     case 2: {
//       // 20 -> 3 6 9 12 15 18 (6 số thỏa mãn)
//       cout << "2.Print and count numbers divisible by 3 that are less than n "
//               "(starting with 1).";
//       int a;
//       cout << "a: ";
//       cin >> a;
//       int count = 0;
//       // Count:
//       // Giả sử nhập a = 10
//       //  i chạy từ 1 -> 10
//       // 1 2 (3) 4 5 (6) 7 8 (9)
//       //.     1      2        3

//       // Những bài tập liên quan đếm: khởi tạo count = 0, mỗi lần thỏa mãn thì
//       // count++
//       for (int i = 1; i < a; i++) {
//         if (i % 3 == 0)
//           count++;
//       }
//       cout << count;
//       break;
//     }
//     case 3: {
//       cout << "3.Check if the integer is a prime number." << endl;
//       int b; // input b = 13
//       cout << "B: ";
//       cin >> b;
//       // i: ... -> ...
//       // 13: 2 cho đến 12 thì số 13 không chia hết số nào cả
//       // Khi in trong vòng lặp for
//       bool isPrime = true;
//       for (int i = 2; i < b; i++) {
//         if (b % i == 0)
//           isPrime = false;
//       }

//       if (isPrime == true)
//         cout << "Prime number" << endl;
//       else
//         cout << "Not prime number";
//       // Không in ra trong vòng lặp for vì sẽ bị lặp đi lặp lại
//       // in nó ra ngoài vòng lặp, tạo 1 biến boolean kiểm tra điều kiện
//     } break;

//     case 4: {
//       cout << "4. Check if the integer is a perfect number.";
//       int c;
//       int sum = 0;
//       cout << "C: ";
//       cin >> c; // 28
//       // 28 có các ước số là 1 2 4 7 14
//       // 1 + 2 + 4 + 7 + 14 = 28
//       // Cộng tổng các ước = 28 thì in ra đây là số hoàn hảo
//       // Để check xem các ước của 28:
//       // chạy for từ 1 đến 28, nếu 28 chia hết cho số nào thì nó là ước (ví dụ 1
//       // 2 4 7 14)
//       for (int i = 1; i < c; i++) {
//         if (c % i == 0) {
//           sum += i;
//         }
//       }

//       if (sum == c) {
//         cout << c << "is perfect number" << endl;
//       } else {
//         cout << c << "is not perfect number" << endl;
//       }

//     } break;

//     case 5:
//       cout << "5.Calculate the sum of divisors of n.";
//       break;
//     case 6:
//       cout << "6.Calculate the factorial of n.";
//       break;
//     case 7:
//       cout << "7.Print the reverse of n.";
//       break;
//     case 8:
//       cout << "8.Print all prime numbers from 1 to n";
//       break;
//     case 9:
//       cout << "9.Exit";
//       break;
//     default:
//       cout << "Please choose 1-9: ";
//       cin >> number;
//     }
//   } while (number != 9);
// }

// // Bài 1.1:
// // int main ()
// // {
// //  int sum = 0;

// //   for (int i = 1; i<= 10; i++ ){
// //     if (i % 2 == 0) {
// //       cout << "Even Number: " << i << endl;
// //     sum += i;
// //   }
// //   }
// //   cout << sum;

// // Bài 1.2:
// // int n;
// // cho nó nhập trước 1 lần -> nhập > 100 hiển thị ra lỗi

// // Pass nhỏ hơn 100 thì sẽ do while -> validate

// // do - while sẽ dùng để validate (không biết trước số lần nhập)

// // for sẽ sử dụng khi biết trước khoảng giá trị (19 -> 100)
// // do {
// //   cout << "Enter n: ";
// //   cin >> n;
// //   if (n > 100) {
// //     cout << "Please choose under 100: ";
// //     cin >> n;
// //   }
// // } while (n > 100);

// // // Nhập n = 93
// // //  93 -> 100
// // if (n % 2 != 0) {
// //   n += 1;
// //   // Vòng lặp for cho biến i ( i sẽ tăng dần t ừ 93 đến 99)
// //   for (int i = n; i <= 100; i += 2) {
// //     cout << i << " ";
// //   }
// // }

// // Bài tập 1.3:
// // int n;
// // int total = 1;
// // cout << "Enter n: ";
// // cin >> n;
// // // 5! = 5 * 4 * 3 * 2 * 1
// // // 7! = 7 * ... -> * 1
// // for (int i = n; i <= n; i--){
// //   total *= i;
// // }
// // cout << total;

// // Bài tập 2:
// // Exercise 2:
// // int number;

// // do {
// //   cout << "1.Lobster Pho" << endl;
// //   cout << "2.Kobe Beef Pho" << endl;
// //   cout << "3.Vietnamese Chicken Pho" << endl;
// //   cout << "4.Sticky Rice with Egg and Meat" << endl;
// //   cout << "5.Egg Sandwich" << endl;
// //   cout << "6.Instant Noodles (Plain)" << endl;
// //   cout << "7.Exit Your Choice:" << endl;
// //   cout << "Enter number: ";
// //   cin >> number;
// //   // Khi chọn số 7 thì exit
// //   switch (number) {
// //   case 1:
// //     cout << "1.Lobster Pho";
// //     break;
// //   case 2:
// //     cout << "2.Kobe Beef Pho";
// //     break;
// //   case 3:
// //     cout << "3. chicken Pho";
// //     break;
// //   case 4:
// //     cout << "4. sticky rice wth egg and meat";
// //     break;
// //   case 5:
// //     cout << "5. egg banh mi";
// //     break;
// //   case 6:
// //     cout << "6. Instant noodles";
// //     break;
// //   case 7:
// //     cout << "Exit";
// //     break;
// //   default:
// //     cout << "Please select from 1-7: ";
// //     cin >> number;
// //   }
// //   // Chọn số 1 -> vẫ nhiển thị menu
// //   // Chọn số 8 -> vẫn in ra lỗi và bắt hiển thị lại menu
// // } while (number != 7);