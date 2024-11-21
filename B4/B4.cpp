#include <bits/stdc++.h>
using namespace std;
#include <fstream>
// 1. Function to get the number of employees
// Function lấy ra thông tin
// kiểu dữ liệu + tên function(parameter...)
ofstream myfile;
//myfile.open("EmployeeAbsences.txt");


int getNumOfEmployees() {
  int employees; // 5
  do {
    cout << "Please enter the number of employees in the company: ";
    cin >> employees;
    if (employees < 0) {
      cout << "Please re-enter the number of employees";
    }
  } while (employees < 0);
  return employees;
}

// function void không cần return: in ra giá trị, gán lại giá trị không cần
// return vì nó không có tính toán
// void displayEmployee() { cout << "Xin chào"; }

//. tham số là cái biến có thể thay đổi giá trị dựa vào input người dùng nhập
// vào
/*void displayNumber(int n) {
  for (int i = 1; i <= n; i++) {
    cout << i << " ";
  }*/

// 2. Function to get the total days absent and write each employee's info to
// the file

// Phụ thuộc vào số lượng nhân viên
// 5 nhân viên: A B C D E
// lặp đi lặp lại 1 công việc 5 lần làn: nhập id, nhập daysAbsent
// A: id = 1, daysAbsent = 2
// B: id = 2, daysAbsent = 3
// C: id = 3, daysAbsent = 5
// D: id = 4, daysAbsent = 6
// E: id = 5, daysAbsent = 9
// sum = 2 + 3 + 5 + 6 + 9
// getTotalDaysAbsent = sum
// tính tổng 2 số a , b do người dùng nhập vào
// int sumNumber(int a, int b) { return a + b; }

int getTotalDaysAbsent(int totalEmployees) {
  int daysAbsent;
  int sum = 0;
  int employeesID;
  //  totalEmployees = 5
  // sum = 1 + 2 + 3 + 4 + 5
  for (int i = 1; i <= totalEmployees; i++) {
    cout << "Please enter an Employee ID";
    cin >> employeesID;
//    outFile << employeesID;
    do {
      cout << "Please enter the number of days this employee was absent: ";
      cin >> daysAbsent;
      if (daysAbsent < 0) {
        cout << "The number of days must be not negative. " << endl;
        cout << "Please re-enter the number of days absent: ";
        cin >> daysAbsent;
      }
    } while (daysAbsent < 0);
    sum += daysAbsent;
    // outFile << "Employee ID: " << empID << ", Days missed: " << daysMissed <<
    // endl;
  }
  return sum;
}
// 3. Function to calculate average days absent
double averageDaysAbent(int totalEmployees, int totalDaysAbsent) {
  double averageAbsent;
  if (totalEmployees == 0) {
    return 0.0;
  } else
    averageAbsent = static_cast<double>(totalEmployees) / totalDaysAbsent;
  return averageAbsent;
}

int B4() {
  // code chạy trong main
  // 1. Lấy ra tổng số lượng nhân viên và gán nó cho 1 biến (gọi hàm nào ?)
  int totalEmployees = getNumOfEmployees(); // 3

  // 2. Lấy ra tổng số lượng ngày nghỉ và gán cho 1 biến
  // argument: đối số
  int totalAbsent = getTotalDaysAbsent(totalEmployees); // 6

  // 3. Tính trung bình dựa vào việc gọi hàm averageDaysAbent()
  double averageAbsent = averageDaysAbent(totalEmployees, totalAbsent);
  cout << averageAbsent;
  /*
    int a = 3, b = 4, c = 5, d = 6;
    int sum = sumNumber(a, b);
    // khi gọi function sumNumber trả về giá trị là 1 số nguyên -> return: trả
    về int sum2 = sumNumber(c, d);

    cout << sum;
    cout << sum2;*/

  fstream employeeAbsences;
  employeeAbsences.open("e:\\ employeeAbsences.txt");
  if (!employeeAbsences.is_open()) {
    return 1;
  };
  return 0;
  
}