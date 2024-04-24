
#include <iostream>

using namespace std;

void showMenu();
void performOperation(int choice, int a, int b);

int main() {
    int choice, a, b;

     showMenu();
    cin>>choice;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    performOperation(choice, a, b);

    return 0;
}

void showMenu() {
    cout << "Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
}

void performOperation(int choice, int a, int b) {
    switch(choice) {
        case 1:
            cout << "addition is: " << a+ b << endl;
            break;
        case 2:
            cout << "subtraction is: " << a- b<< endl;
            break;
        case 3:
            cout << "multiplication is: " << a * b << endl;
            break;
        case 4:
            if (b== 0) {
                cout << "The second integer is zero, divide by zero." << endl;
            } else {
                cout << "Result of division: " <<(a) / b<< endl;
            }
            break;
        default:
            cout << "Invalid choice.enter a number between 1 and 4!" << endl;
    }
}
