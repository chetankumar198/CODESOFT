#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double num1, num2, result;
    char operation, choice='\0';
    bool error=false;
    
    do{
    
    error=false;
        

    
    cout << "Enter the first no: \n";
    cin >> num1;


    cout << "Enter the  operation (+, -, *, /): \n";
    cin >> operation;

    
    cout << "Enter the second no: \n";
    cin >> num2;
    
    
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Cannot divide by zero." << endl;
                error=true;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            error=true;
            break;
    }

    if(!error)
        cout << num1 << " " << operation << " " << num2 << " = " << result << endl;
    
        cout << "Do you want to perform another calculation? (y/n): \n";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');


    return 0; 
}