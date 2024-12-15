//This program is used as a review for the final exam.

//--------------------------------------------------------------------------------------------------------
//NOTE: this does not mean that the questions on here will be in the exam, nor does it mean that questions
//      absent will not be on the exam. 
//--------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

void doSomething(int, double &);

int main() {
    /*
    ------------------------------------------------------------------------------
    PROBLEM #1
global is located outside the function. local is located inside the function
    What are global and local variables? What are the differences between the two?
    ------------------------------------------------------------------------------
    */


    /*
    -----------------------------------------------------------------------------------------------
    PROBLEM #2

    Write the function header for a function called overtimePay, that returns a double and has a
    parameter list that takes a string called name, an int named hours, and a double named payrate.

    Then, write the function prototype for this function in the space above the main function.
    -----------------------------------------------------------------------------------------------
    */
//    double overtimePay(string name, int hours, double payrate) {
//
//    };
//double overtimePay(string name, int hours, double payrate){
//    return ...;
//}


    /*
    -----------------------------------------------------------------------
    PROBLEM #3

    What is a function signature? What does it mean to overload a function?
    -----------------------------------------------------------------------
    */
// return type - name function(parameter){}


    /*
    ----------------------------------------------------------------------------------------------------
    PROBLEM #4

    Given the function definition below (also found after the main function), call the function and pass
    the variables 'firstVal' and 'secondVal' into the function, respectively.

    What will be displayed on the screen after the execution of the code? What will the variables
    'firstVal' and 'secondVal' contain?


    void doSomething(int a, double &b)
    {
        for (int i = 0; i < a; i++) 0 1 2 3
        {
            cout << ".";. . . .
            b += 0.01;
        }

        cout << endl;

        a += 5;

        cout << "A variable a is: " << a << endl; // A variable a is: 9
    }
    ----------------------------------------------------------------------------------------------------
    */

    int firstVal = 4;
    double secondVal = 3.14;
    doSomething(firstVal,secondVal);
    //


    /*
    -----------------------------------------------------------------------------
    PROBLEM #5

    Create an array named 'aBunchOfStuff' of type string and with the size of 45.

    Use a constant integer, named SIZE, to define the size.
    -----------------------------------------------------------------------------
    */
    const int SIZE = 45;
    string aBunchOfStuff[SIZE];


    /*
    -----------------------------------------------------------------------------------------------------
    PROBLEM #6

    Create an array named 'letters' of type char and initialize it with the values of 'a', 'b', 'c', 'd',
    and 'z' in one line.
    -----------------------------------------------------------------------------------------------------
    */
char letters[]= {'a', 'b', 'c', 'd', 'z'};

    /*
    --------------------------------------------------------------------------
    PROBLEM #7

    What is a range-based for loop? How does it differ from a normal for loop?
    --------------------------------------------------------------------------
    */ int array[5] ={2,3,4,5,1} ;
for (int i  : array);

// it checks each element in array
for (int i = 0; i < 5; i++)
    // it checks index of each element
    /*
    ----------------------------------------------------------------------------------------------------------------
    PROBLEM #8:

    Write a range-based for loop that will display every element in an array. Use the array 'numbers' defined below.
    ----------------------------------------------------------------------------------------------------------------
    */

    int numbers[] = {1, 5, 8, 34, 6, 73, 2};
for (int i : number){
    cout << i << " ";
}

    /*
    --------------------------------------------------------------------------------------------------------------
    PROBLEM #9

    Complete the function 'arrayFunc' defined below the main function. The function should first display
    every element in the passed array, and then add 5 each element. "Don't forget to create the prototype".

    Then, call the function using the defined array 'numbers2'. What will the values of the elements of 'numbers2'
    be after you call the function 'arrayFunc'?
    --------------------------------------------------------------------------------------------------------------
    */
    void arrayFunc(int arr[], int size);

    void arrayFunc(int arr[], int size){
for (int i = 0; i < size; i++){
    arr[i]+=5;
    cout << arr[i] << " ";
}
    }
int main() {
    int numbers2[] = {4, 5, 6, 7, 8};
arrayFunc(number2[], 5);
}
    /*
    ------------------------------------------------------------------------------------
    PROBLEM #10

    What are two algorithms used to search through arrays for a value? How do they work?
    ------------------------------------------------------------------------------------
     // 3 5 7 9 10
                                      ->
     // value: 9
     // Position: 3

    */
    // linear_search: check index of each element from the beginning to the end of an array
    // binary_search: check index of element in the middle of array. if middle index = value => position of mid index
    // else if: middle index < value => index on the left = middle index + 1;
    // else : middle index > value => index on the right = middle index - 1;


    int linear_search(int arr[], int size, int value){
        int pos = -1;
       for (int i = 0; i < size; i++){
           if(arr[i] == value) {
              pos = i;
           }
       }

        return pos;
    }
    // 1 2 3 4 5 6 7 8
    // value : 5
    int binary_search(int arr[], int size, int value1){
        int pos = -1;
        int left = 0;
        int mid;
        int right = size - 1;
        while (left <= right){
            mid = (left+right)/2;
            if(arr[mid] == value1){
                pos = mid;
                break;
            }
            else if(arr[mid] < value1){
               left = mid + 1;
            }
            else // arr[mid] > value
                right = mid - 1
        }
        return pos;
    }

    /*
    --------------------------------------------------------------------
    PROBLEM #11

    What are the two algorithms used to sort an array? How do they work?
    --------------------------------------------------------------------
    */


    /*
    ---------------------------------------------------------------------------------------------------------------
    PROBLEM #12

    Given the following array 'jumbled', what will the array be after the first swap of a selection sort algorithm?
    (Assume the algorithm sorts in ascending order).
    ---------------------------------------------------------------------------------------------------------------
    */

    int jumbled[] = {12, 5, 3, 1, 9, 100, 45};


    /*
    ---------------------------------------------------------------------------------------------------------------
    PROBLEM #13

    Given the following array 'jumbled2', what will the array be after the third swap of a bubble sort algorithm?
    (Assume the algorithm sorts in ascending order).
    ---------------------------------------------------------------------------------------------------------------
    */

    int jumbled2[] = {5, 9, 50, 6, 1, 70, 0};


    return 0;
}


/*------------------------------------------------
Here are the function definitions for this program
------------------------------------------------*/

void doSomething(int a, double &b) {
    for (int i = 0; i < a; i++) {
        cout << ".";
        b += 0.01;
    }

    cout << endl;

    a += 5;

    cout << "A variable a is: " << a << endl;
}


//******************************************************************************
// The function arrayFunc should display all the elements in the passed array. *
// Then, the function should add 5 to each element in the array.			   *
//******************************************************************************
void arrayFunc(int array1[], int size) {

}