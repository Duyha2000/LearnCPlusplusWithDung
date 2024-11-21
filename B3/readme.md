# Exercise 1:
## 1. Print the even numbers from 1 to 10 and calculate their sum.

-> Steps:
- Declare and initialize a variable sum with a value of 0 to store the sum of even integers in the range 1-10.
- Use a for loop with a control variable i to iterate and print the integers in the range 1-10.
- Check if the value of i is an even number (using if).
- If i is even, print the value of i to the screen and add its value to sum.
- End the for loop and print the total sum value.

## 2. Write a program to input an integer n from the keyboard and display even numbers from n to 100.
For example, if n = 90, the program should display: 90 92 94 96 98 100

-> Steps:

- Input: Prompt the user to enter an integer n.
- Check range: If n is greater than 100, display a message indicating that no even numbers are in the range. If n is less than or equal to 100, proceed.
- Ensure starting even number: If n is odd, increment n by 1 to start from the next even number.
- Loop and display: Use a loop to print each even number from n up to 100, incrementing by 2 in each iteration.

## 3. Calculate the factorial of a number
For example, 5! = 5 * 4 * 3 * 2 * 1

-> Steps:

- Input: Prompt the user to enter an integer n for which the factorial will be calculated.
- Initialize product: Declare a variable, factorial, and set it to 1 (since multiplying by 1 does not change the result).
- Loop for factorial calculation: Use a loop to multiply factorial by each integer from n down to 1.
- Display result: Print the resulting factorial value. 

# Exercise 2: Display a menu and perform functions as required.
Breakfast Menu

1. Lobster Pho
2. Kobe Beef Pho
3. Vietnamese Chicken Pho
4. Sticky Rice with Egg and Meat
5. Egg Sandwich
6. Instant Noodles (Plain)
7. Exit Your Choice:

-> Steps:

a. The menu is displayed at least once, repeating until the user selects 7 - Exit to end the program. 
b. The user enters values 1-7; if outside this range, display “Please select from 1 - 7.” 
c. For choices 1-6, display “You selected …, please wait a moment.”

-> Implementation Steps:

Use do…while (infinite loop) to display the menu as required.
Declare a variable choice to store the customer's selection.
Use switch…case to handle the choice value and display the corresponding message or exit the program.

# Exercise 3: Enter an integer n, display a menu, and execute functions based on the following menu:
INTEGER NUMBER MENU

1. Print a sequence of values less than or equal to n and calculate the sum.
2. Print and count numbers divisible by 3 that are less than n.
3. Check if the integer is a prime number.
[A prime number is a natural number greater than 1 that has no divisors other than 1 and itself. In other words, a prime number can only be divided evenly by 1 and the number itself, leaving no remainder.

### For example, 2, 3, 5, 7, 11, and 13 are all prime numbers because they cannot be divided evenly by any other numbers except 1 and themselves.

### Prime numbers are fundamental in mathematics because they are the "building blocks" of whole numbers. Every positive integer greater than 1 can be uniquely expressed as a product of prime numbers; this concept is known as the fundamental theorem of arithmetic. For instance, 12 can be broken down into prime factors as 2 × 2 × 3, and this is unique to 12.

### Prime numbers are especially significant in fields like cryptography, where large primes are used to create secure encryption keys due to their indivisibility by other numbers.]

4. Check if the integer is a perfect number.
[ perfect number, a positive integer that is equal to the sum of its proper divisors, excluding itself. The smallest perfect number is 6, which is the sum of 1, 2, and 3. Other perfect numbers are 28, 496, and 8,128.
For Example:
. 6 is a perfect number because its divisors (excluding itself) are 1, 2, and 3. When you add these up—
1 + 2 + 3 — you get 6.
. 28 is another perfect number. Its divisors, excluding 28 itself, are 1, 2, 4, 7, and 14. When summed, they equal 28: 
1+2+4+7+14=28.]

5. Calculate the sum of divisors of n.
6. Calculate the factorial of n.
7. Print the reverse of n.
8. Print all prime numbers from 1 to n.
Input: n = 13 
Output: 2,3,5,7,11,13

9. Exit.

-> Your Choice:

-> Steps:
Display the menu at least once, repeating until the user chooses 9 - Exit to end the program.
Prompt the user to input an integer value for n.
Implement functionality for each menu option based on the user's choice.