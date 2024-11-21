# Programming Exercises
## Exercise 1:

### a. Write a program to check if an integer n entered from the keyboard is even or odd. If it is even, print "Even number".
If it is odd, print "Odd number". For example:

Given n = 10, the output should be: "Even number". 
Given n = 151, the output should be: "Odd number".

-> Note: Use either a regular if/else statement or the ternary operator: condition ? true : false.
// Bài 1a:
// int number;
// cin >> number;

// =
// == để so sánh 2 vế
// vì sao bỏ {}
// Số chẵn: số chia hết () cho 2
// Phần dư: %, phần nguyên /
// if (number % 2 == 0) {
//   cout << number << " is even number";
// } else
//   cout << number << "is odd number";
// chỉ có if - else (ternary operator)
// string result = condition ? statement true : statement false
// string result  = number % 2 == 0 ? " is even number" : " is odd number";
// cout << number << result ;


### b. Write a code snippet that accepts the salaries of two people. Your task is to find out who has the higher salary.
Output: If the first person has the higher salary, the program should print "person1" on the command line. 
If the second person has the higher salary, the program should print "person2".

Note: Use either a regular if/else statement or the ternary operator: condition ? true : false.
// Bài 1b:
int salaries_Person1, salaries_Person2;
cin >> salaries_Person1 >> salaries_Person2;
// if (salaries_Person1 > salaries_Person2)
//   cout << "Person 1";
// else
//   cout << "Person 2";
// salaries_Person1 (int)
// string result = salaries_Person1;
// result = salaries_Person2;
string result = salaries_Person1 > salaries_Person2 ? "person1" : "person 2";
cout << salaries_Person1 << " " << result << endl;
cout << salaries_Person2 << " " << result << endl;


## Exercise 2:
Write a code snippet that accepts a character input. Your task is to determine whether the given character is an uppercase letter, a lowercase letter, or a non-letter character.

Initialize a variable named character.
Output: If the character is an uppercase letter, your program should print "upper-case alphabet".
If it is a lowercase letter, print "lower-case alphabet".
If it is not a letter, print "not an alphabet".

char input;
cin >> input;
// uppercase: U
// is thường dùng kiểm tra đúng hoặc sai
// isMale, isDark (true/false)
// if (isupper(input)) {
//   cout << "Uppercase";
// } else if (islower(input)) {
//   cout << "Uppercase";
// } else {
//   cout << "not an alphabet";
// }

// Cách 2:
if (input >= 'A' && input <= 'Z') {
  cout << "Uppercase";
} else if (input >= 'a' && input <= 'z') {
  cout << "Lower case";
} else {
  cout << "not an alphabet";
}

// string input; 
// getline(cin, input); // getline mục đích để nhập 1 chuỗi có khoảng trắng, nếu dùng cin sẽ chỉ lấy được chữ đầu tiên

## Exercise 3:
Grade Classification:
Input an integer value score (assume a range from 0 to 100).
Use if-else statements to classify the score into different levels as follows:
If score <= 50: Result is "Weak".
If score > 50 and score <= 60: Result is "Average".
If score > 60 and score <= 75: Result is "Good".
If score > 75 and score <= 90: Result is "Very Good".
If score > 90: Result is "Excellent".
Print the corresponding classification result based on the input score.
Example: If the input score = 65, the output will be "Good".

// Bài tập 3:
int score;
cin >> score; // 101 
// Trong 1 chuỗi điều kiện, thằng đầu là if, những thằng giữa là else if, còn cuối là else
if ((score < 0) || (score > 100)) {
  cout << "Re-enter score";
} 
else if (score <= 50)
  cout << "Weak";
else if ((score > 50) && (score <= 60))
  cout << "Average";
else if ((score > 60) && (score <= 75))
  cout << "Good";
else if ((score > 75) && (score <= 90))
  cout << "Very good";
else
  cout << "Excellent";

## Exercise 4:
Write a program to determine if a given year is a leap year or not. If the entered year is a leap year, print: "Year year is a leap year!" If it is not a leap year, print: "Year year is not a leap year!"

A leap year is defined as a year that is divisible by 4 but not by 100, or divisible by 400. 
Example: For year = 2000, it should print: "Year 2000 is a leap year!".
Conversely, for year = 1999, it should print: "Year 1999 is not a leap year!"

// Bài tập 4:
int year;
cin >> year;
// && thì nhóm lại trong ()
if ((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0) {
  cout << year << " is a leap year";
} else {
  cout << year << " is not a leap year";
}

## Exercise 5:
Given a number from 0 to 6, write a program to print the corresponding day of the week.

number: 0 => "Day of the week: Sunday" 
number: 1 => "Day of the week: Monday" 
number: 2 => "Day of the week: Tuesday" 
number: 3 => "Day of the week: Wednesday" 
number: 4 => "Day of the week: Thursday" 
number: 5 => "Day of the week: Friday" 
number: 6 => "Day of the week: Saturday" 

Example: For number = 0, print: "Sunday". 
For number = 4, print: "Thursday". For number = 6, print: "Saturday".

Hint: Use a switch case statement.

int number;
cin >> number;
switch (number) {
case 0:
  cout << "Day of the week: Sunday";
  break;
case 1:
  cout << "Day of the week: Monday";
  break;
  // break để làm
case 2:
  cout << "Day of the week: Tuesday";
  break;
case 3:
  cout << "Day of the week: Wednesday";
  break;
case 4:
  cout << "Day of the week: Thursday";
  break;
case 5:
  cout << "Day of the week: Friday";
  break;
case 6:
  cout << "Day of the week: Saturday";
  break;
default:
  cout << "Re-enter day ";
  break;
}

## Exercise 6
Given two integer variables a and b, and a character variable c entered from the keyboard.

The variable c is one of the four characters: '+', '-', '*', or '/'.

Write a program to display the value of the expression when applying the operation c on a and b.

For example, if you enter a = 7, c = '+', b = 9, the output should be: 16. -> Hint: Use a switch case statement.
char c; // + - * /
int a, b;
cin >> a >> b >> c;

switch (c) {
  // cannot jump from switch statement to this case label (ccls): mỗi case
  // phải {} để không bị lỗi này

case '+': {
  int sum = a + b; // sum để tính tổng
  cout << sum;
  break;
}
case '-': {
  int minus = a - b;
  cout << minus;
  break;
}

case '*': {
  int times = a * b;
  cout << times;
  break;
}

case '/': {
  int divide = a / b;
  cout << divide;
  break;
}

default: {
  break;
}
}

## Exercise 7:
Swapping two integers a and b:

Input two integers a and b.
Perform a swap of the values of a and b, meaning a becomes b, and b becomes a.
Example: If a = 3 and b = 4, after swapping, a = 4 and b = 3.
Print the result after the swap.

// If a = 3 and b = 4, after swapping, a = 4 and b = 3.
int a, b;
cin >> a >> b; // a = 3, b = 4
// temp (temporary: tạm thời)
// 99% dùng == trong điều kiện câu lệnh if
// Cách 1:
int temp;
temp = a; // temp = 3
a = b;    // a sẽ mang nước bình b (4)
b = temp;
// swap(a, b); // đổi giá trị giữa 2 biến
cout << a;
cout << b;

## Exercise 8:
Convert seconds into hours, minutes, and seconds:

Input an integer s representing a number of seconds.
Convert s into hours, minutes, and seconds by dividing and taking the remainder.
Example: If s = 3905, the result should be 1h5m5s.
Sum of two time periods (hours, minutes, seconds):

## Exercise 9:
Input two sets of three integers: h1, m1, s1 and h2, m2, s2, representing two time periods (hours, minutes, and seconds).
Calculate the sum of these two time periods, ensuring proper conversion if minutes or seconds exceed 60.
Print the total hours, minutes, and seconds after summing.