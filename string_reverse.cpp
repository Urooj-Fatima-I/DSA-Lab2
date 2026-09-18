#include <iostream> 
//header file for string manipulation
#include <string>
using namespace std;

//string reverse function
void string_reverse(string *s){
    //finding length/total characters of string that will be use to reverse the array
    int size = s ->length();
    
    //algo to reverse the string
    for(int i = 0; i < size; i ++){
        //accessing each character from back of array and printing it
        cout << (*s)[size - i - 1];
    }
}

//main function
int main() { 

    //making a string variable to store
    string t;
    //making dynamic string array
    string *text = new string;

    //taking string from the user in a string variable 
    cout << "Write the text you want to reverse: " << endl; 
    getline(cin, t); //used getline to consider spaces as characters

    //assigning variable's address to the dynamic string array array 
    text = &t;

    //calling the function
    cout << "Reversed string: " << endl;
    string_reverse(text);

    //deleting the array
    delete[] text;

    return 0;
}
