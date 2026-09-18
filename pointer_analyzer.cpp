//TASK 3
#include <iostream> 
using namespace std;

//part1: analyzer function
void pointer_analyze(int *ptr){
        cout << "The address of pointer: "<< ptr << endl;
        cout << "The value of pointer: "<<*ptr << endl << endl;
    }

//main function
int main() { 
//part2: 
    //variable on stack, assigning its address to a pointer pa 
    int a = 5;
    int *ptr_a = &a;

    //calling function for the stack variable
    cout << "For stack variable a: "<< endl;
    pointer_analyze(ptr_a);

    //making a variable in heap memory using new variable
    cout << "For heap dynamic variable b: "<< endl;
    int *ptr_b = new int(10);

    //passing the dynamic variable to the analyzer program
    pointer_analyze(ptr_b);

    //deleting the dynamic variable
    delete[] ptr_b;
    
    return 0;
}
