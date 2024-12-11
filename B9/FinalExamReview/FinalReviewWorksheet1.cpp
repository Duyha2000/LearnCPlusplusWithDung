//This program is used as a review for the final exam.

//--------------------------------------------------------------------------------------------------------
//NOTE: this does not mean that the questions on here will be in the exam, nor does it mean that questions
//      absent will not be on the exam. 
//--------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void refVarFunc(int &, int);

int main() {
    /*
    ---------------------------------------------------------------------------------------
    PROBLEM #1

    1. What does it mean to increment something? What operator is used in C++ to do this?
   increase by its value. ++. +=2
    2. What does it mean to decrement something? What operator is used in C++ to do this?
decrease by its value --
    3. What is the difference in using a increment/decrement operator in postfix or prefix?
     int a = 5;
    a++/++a
     ---------------------------------------------------------------------------------------
    */


    /*
    ---------------------------------------------------------------------------------------------------------------
    PROBLEM #2

    1. What does it mean to find the modulus (mod) of something? What operator is used in C++ to do this?
     %
    2. What operator is used in C++ to represent division?
/
    3. What will be the data type of the result of division between two integers? int

    4. What will be the result of the expression 7 / 2 ? What will be different compared to the expression 7.0 / 2?
     7/2 = 3
     7.0/2= 3.5
     ---------------------------------------------------------------------------------------------------------------
    */


    /*
    -------------------------------------------------------------------------------
    PROBLEM #3

    What will the variables 'someNum', 'anotherNum', 'lastNum', and 'aBool' contain
    after the execution of the following code?
    -------------------------------------------------------------------------------
    */

    int someNum = 2, anotherNum = 3, lastNum = 1;
    bool aBool; // true / false
// 3 > 2 * 1 -> 3 > 2 đúng -> false - 0/ true - 1
    aBool = !(++someNum > (--anotherNum * lastNum++)); //

    /*
    ------------------------------------------------------------------------------------------------
    PROBLEM #4

    1. Name the three different types of loops.// for- do while- while
    2. For each type of loop, state if the loop is pretest or posttest, and explain what that means.
     do while pretest. for - while. posttest.
     do while run program first and check condition later.
     for - while check condition first.
    ------------------------------------------------------------------------------------------------
    */


    /*
    ----------------------------------------------------------------------------------
    PROBLEM #5

    What are the three parts of a for loop definition called? What do each of them do?
     start           end    step
     0 - > 5
     for(int i = 0 ; i <= 5; i++)
    ----------------------------------------------------------------------------------
    */


    /*
    -------------------------------------------------------------------------------
    PROBLEM #6

    What will be displayed on the screen after the execution of the following code?
    -------------------------------------------------------------------------------
    */

    int counter = 0;
    bool moreThan20 = false;

    while (!moreThan20) { // true
        if (counter != 6) {  // 0 1 2 3 4 5 7 8 9 10 11 12 13
            cout << counter << endl; // 0 2 4 8 10 12 14 Getting close 16 18 Almost there 20
        }

        if (counter == 14) {
            cout << "...Getting close..." << endl; // "...Getting close..."
        } else if (counter == 18) { // 16 17 almost there ...
            cout << "...Almost there..." << endl; // "...Almost there..."
        }

        if (counter > 20) { // 19 20 itss over 20
            cout << "...It's over twenty..." << endl;
            moreThan20 = true;
        }

        // step:
        counter += 2; // 2 3 4 5 7 8 9 10 11 12 13 getting close ... 15 16 17 almost tere 19 it over twnty
    }


    /*
    --------------------------------------------------------------------------
    PROBLEM #7

    What do the following statements evaluate to, given the defined variables?
    --------------------------------------------------------------------------
    */

    string name1 = "John", name2 = "Jane", name3 = "Devin", name4 = "John ";
    // [J]ohn
    // [J]ane
    // John > Jane
    // name1 ="John"
    // name2 = "Za" -> name2 > name1
    name1 < name2; // false

    name2 > "Janet"; // false

    // ASCII: 65-96 là chữ hoa (A - Z), 97 - 126 là chữ thường(a -z)
    name3 != "devin"; // true

    name3 < "DEVIN";// false

    name1 == name4; // false


    /*
    -----------------------------------------------------------------------------------------------------
    PROBLEM #8

    Create the code below to open a file named 'testing123.txt' for writing.
    Save the values 1, 2, 20, and 37 into the file. Each value should be on its own line inside the file.

    Then close the file.
    -----------------------------------------------------------------------------------------------------
    */
    ofstream myFile;
    myFile.open("testing123.txt");
    myFile << "1" << endl;
    myFile << "2" << endl;
    myFile << "20 " << endl;
    myFile << "37" << endl;
    myFile.close();

    /*
    -------------------------------------------------------------------------------------------------------------
    PROBLEM #9

    1. What is a reference variable? When used as function parameters, how do they differ from normal parameters?
variable can change value.
     void swap(int &a, int &b){
     int swap;
     a = swap;
     swap = b;
     b = a;
     main:
     int a = 3; int b = 5;
     cout << Before swap: << a << b;
     swap(3,5);
     cout << After swap: << a << b;
    2. What must you use in the variable name when you create a reference variable?
    -------------------------------------------------------------------------------------------------------------
    */


    /*
    ---------------------------------------------------------------------------------------------------------
    PROBLEM #10

    Given the function definition below, what will the value of 'x' and 'y' be after the code executes below?

     // x = 1 2 3 4
     // y = 2 4
    void refVarFunc(int &num1, int num2)
    {
        for (int i = 0; i < 5; i++)
        {
            num1++;
            1 2 3 4
            num2 += 2;
            2, 4
        }
    }

    ---------------------------------------------------------------------------------------------------------
    */

    int x = 10, y = 2;

    refVarFunc(x, y);

    return 0;
}

/*----------------------------------------
 Here are the functions for this worksheet
----------------------------------------*/

void refVarFunc(int &num1, int num2) {
    for (int i = 0; i < 5; i++) {
        num1++;
        num2 += 2;
    }
}