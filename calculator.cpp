#include <iostream>
using namespace std;

int main() {
   char op;
   float num1, num2;

   cout << "Enter the operator either + or - or * or /: ";
   cin >> op;

   cout << "Enter two operands: ";
   cin >> num1;

   cout << "Enter another operand: ";
   cin >> num2;

   switch(op) {

    case '+':
    cout << "The answer is: " << num1+num2;
    break;

    case '-':
    cout << "The answer is: " << num1-num2;
    break;

    case '*':
    cout << "The answer is: " << num1*num2;
    break;

    case '/':
    cout << "The answer is: " << num1/num2;
    break;

    default:
        //If the operator is other than what we mentioned above//
        cout << "Error! Operator not recognized...";
        break;
   }

   return 0;

}
