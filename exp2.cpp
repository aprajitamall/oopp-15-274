#include <iostream>
using namespace std;
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "[Inside swapByValue]  Formal parameters swapped: a = " << a << ", b = " << b << "\n";
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "[Inside swapByRef]    Formal parameters swapped: a = " << a << ", b = " << b << "\n";
}


void swapByAddress(int *a, int *b) {
    int temp = *a; 
    *a = *b;      
    *b = temp;     
    cout << "[Inside swapByAddress] Formal parameters swapped: *a = " << *a << ", *b = " << *b << "\n";
}

int main() {
    int num1 = 10, num2 = 20;

    cout << "num1 = " << num1 << ", num2 = " << num2 << "\n\n";

    swapByValue(num1, num2);
    cout << "Result in main: num1 = " << num1 << ", num2 = " << num2 << " (UNCHANGED)\n\n";


    swapByReference(num1, num2);
    cout << "Result in main: num1 = " << num1 << ", num2 = " << num2 << " (SWAPPED)\n\n";

    num1 = 10; num2 = 20;

    swapByAddress(&num1, &num2); 
    cout << "Result in main: num1 = " << num1 << ", num2 = " << num2 << " (SWAPPED)\n";

    return 0;
}
