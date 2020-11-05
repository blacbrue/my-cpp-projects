#include <iostream>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <dos.h>
#include <windows.h>
using namespace std;

int main() {
   int x;
   int y;

   cout << "Enter a number to compare: ";
   cin >> x;
   cout << "You chose the number: " << x;
   sleep(1);

   cout << "\nEnter another number to compare: ";
   cin >> y;
   cout << "You chose the number: " << y;
   sleep(1);

   if (x > y) {
      cout << "\nNumber " << x << " is higher than " << y << "!";
   } else {
      cout << "\nNumber " << y << " is higher than " << x << "!";
   }

   return 0;
}
