#include <iostream> 
using namespace std;

int main() { 
    //variable for size of dynamic array that will be taken from user
    int size; 
    
    //input size that is number of employee
    cout << "Enter number of total employees: ";
    cin >> size;

    //creating array
    int *salArray = new int [size];

    //Input salaries 
    for (int i = 0; i < size; i++) { 
        cout << "Enter Salary for employee: " << (i + 1) << ": "; 
        cin >> salArray[i];
        }

    //Apply increment formula for 
    for (int i = 0; i < size; i++) { 
        salArray[i] = salArray[i] + salArray[i] / (i + 1);
        }

    //Display updated salaries 
    cout << "\nUpdated Salaries: "; 
    for (int i = 0; i < size; i++) { 
        cout << salArray[i] << " ";
        cout << endl;
        }

    //deleting array 
    delete []salArray;

return 0;
}
