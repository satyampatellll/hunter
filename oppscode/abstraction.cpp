// and only the requried behaveriour is exposedor example in a tv the change of volume ,brightness ,contrast etc is dpne either using a remote 
// or the button pannel on the tv. in cpp absraction is implimented using the following 2 methods 
// 1- incapsulation-using access modifiers like private and protected enable us to hide the imp data and some behaviour of a class.
// public modifier help us to show only the requried behaviour

// 2- abstract classes 
// we can make a class as abstrct so that there are some implimantation complete and some are 
// left to be implimented later 

// absraction using abstract class:-
// assume that there is a class known as basic calculator . it can only perform addition and subtraction
// due to some reason multiplication nd division couldnt be implimented but there is a future scope of there implimentation 
// to makw an abstract class there should at least one pure virtual func in it 
// 2)- we cant create an obj of abstract class,but we can create pointer to an abstract class
// an absract is in a way hidden bcoz it cant be intentiated 
// WE CAN ONLY USE feature of abstract class if we inherit it using another class
// a child class that inherits an abstract class but doesnt impliment all the pure vitual fun of the abstract class 
// will also be consider abstract 
#include <iostream>
using namespace std;
class BasicCalc {
    public:

    virtual double add(double a, double b) {
        return a + b;
    }
    virtual double sub(double a, double b) {
        return a - b;
    }
    virtual double multi(double a, double b) = 0 ;{
        return a * b;
    }
    virtual double div(double a, double b) = 0 ; {
        return a / b;
    }
};

class calc: public BasicCalc {
    public:
    double mul(double a, double b) {
        return a * b;
    }
    double div(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            throw new IllegalArgumentException("Division by zero is not allowed.");
        }
    }
};

int main() {
    BasicCalc a;
    calc b;
    BasicCalc* ptr = New calc;
    cout << ptr->add(5, 3) << endl; // Outputs 8
}

//inerface- a class that have all the fun as pure and virtual and there are no implimentated fun 
//this type of class is known as interface class the use of an interface an be thought of unversal remote conteo 
//an unviversal remote can control any applience it is pointed to the remote doesnt know wether it is controling a tv or an ac
//if the basic calculator had all the 4 fun add sub mult div as pure virtul fun it can be called as an an default interface 
//diff between abstract or interface:-
//interface- it goes though layer  

//ERROR:-
types of error:-
1- run time error 
// A runtime error in a program is an error that occurs while the program is running after being successfully compiled.
// Runtime errors are commonly called referred to as "bugs" and are often found during the debugging process before the software is released.
// When runtime errors occur after a program has been distributed to the public, developers often release patches, or small updates designed to fix the errors.
// Anyone can find the list of issues that they might face if they are a beginner in this article.
// While solving problems on online platforms, many run time errors can be faced, which are not clearly specified in the message that comes with them. There are a variety of runtime errors that occur such as logical errors, Input/Output errors, undefined object errors, division by zero errors, and many more.
// 

// Errors in programming are issues that disrupt the normal execution of a program. They can occur at various stages, such as during compilation or runtime, and are broadly categorized into syntax errors, runtime errors, and logical errors.

// Syntax Errors

// Syntax errors occur when the code violates the rules of the programming language. These errors are detected during compilation and prevent the program from running. Common causes include missing semicolons, incorrect indentation, or unmatched brackets.

// Example:

// # Missing colon in the function definition
// def greet()
// print("Hello, World!")
// Copy
// Fix: Add the missing colon (:) after greet().

// Runtime Errors

// Runtime errors occur during the execution of a program. These errors happen when the program encounters an illegal operation, such as dividing by zero or accessing an invalid memory location. Unlike syntax errors, the program compiles successfully but crashes during execution.

// Example:

// # Division by zero
// a = 5
// b = 0
// print(a / b)
// Copy
// Fix: Add a condition to check if b is zero before performing the division.

// Logical Errors

// Logical errors occur when the program runs without crashing but produces incorrect or unexpected results. These errors are caused by flaws in the program's logic or algorithm and are often the hardest to detect.

// Example:

// # Incorrect logic for finding the maximum of two numbers
// a = 5
// b = 7
// if a > b:
// print("a is less than b")
// else:
// print("b is less than a")
// Copy
// Fix: Correct the logic to compare the numbers properly.

// Key Considerations

// Syntax errors are the easiest to identify as they are flagged by the compiler or interpreter.

// Runtime errors require careful testing and debugging to handle edge cases and unexpected inputs.

// Logical errors demand thorough understanding and validation of the program's logic to ensure correctness.

// Understanding these error types and their causes is essential for debugging and writing robust code.
//EXCEPTION ARE UNPREDICTABLE ERROR WHICH OCCURS DUE TO INHERENT INSIDE THE CODE.THE CRASING OF THE CODE DUE TO THESE ERRORS 
//MAY GIVE UNEXPECTED OUTPUTS AND COMPILCATED ERRORS STATEMENT. A GOOD DEVELOPER MUST HANDLE THESE EXCEPTIONS GACEFULLY IT IS CALLED
///EXCEPTION HANDLING 


CPP IMPLIMENT ECXCEPTIONAL HANDLING USING 3 KEY WORDS;
1) try - it is a scoped(this under {} is called scope) block which should enclose the line of code which may generate exceptions
2) catch - it is also a scoped block that accepts an argument this part is used to display meaning full messages once an error is 
            caught.
3) throw - if we want to throw error manually so we can do that by using throw key words  




