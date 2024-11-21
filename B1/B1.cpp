#include <bits/stdc++.h> // sử dụng được tất cả thư viện trong c++ như cctype, cmath, vector, set...

using namespace std;

int B1() {
  int seconds;
  // 1 giờ có 60 phút (3600s), 1 phút 60s, dùng toán tử / và % để xử lý
  // Output: 1 giờ 5 phút 5s
  cin >> seconds; // 3910s

  // 3905 : 3600 = (/) phần nguyên 1 và (%) dư 305
  // 3905 / 3600
  // 305 / 60
  // 5
  //  - / - %
  int hours = seconds / 3600;
  cout << hours << " giờ ";            // =1
  int minutes = (seconds % 3600) / 60; // 5
  cout << minutes << " phút ";
  // (seconds % 3600) = 310
  // 310 : 60 = 5 dư 10
  int second = (seconds % 3600) % 60;
  cout << second << " giây"; // 10

  return 0;
}
