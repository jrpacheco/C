#include <iostream>

using namespace std;

int main(){
/*
// What is the output of the following program lines when they are embedded in a 
//correct program that declares number to be of type int?

    double number = (1 / 3) * 3;    
    cout << "(1/3) * 3 is equal to " << number << "/n";

    return 0;

*/

/*
// Write a complete C++ program that reads two whole numbers into two variables 
//of type int and then outputs both the whole number part and the remainder 
//when the first number is divided by the second. This can be done using the 
//operators / and %.
    int number1;
    int number2;
    int resultInt;
    double resultDouble;

    cout << "Enter with number1: " << "\n";
    cin >> number1;

    cout << "Enter with number2: " << "\n";
    cin >> number2;

    resultInt = (number1 / number2);
    cout << "resultInt : " << resultInt << "\n";

    resultDouble = number1 % number2;
    cout << "resultDouble : " << resultDouble << "\n";

    return 0;
*/

// Ordem de valores
int n = 2;
//cout << (n <= 2) && (++n > 2); //True

//cout << (n + 2) * (++n) + (int)5; //17

cout << ((n + 2) * (++n)) + 5; //17

return 0;
}