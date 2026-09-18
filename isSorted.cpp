#include <iostream>
#include <cassert>
using namespace std;
//test cases
//1.
void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
}
//2.
void testUnSortedArray() {
    int arr[] = {3, 5 ,1 ,2 ,4};
    bool result = isSorted(arr, 5);
    assert(result == false);
}
//3.
void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 4};
    bool result = isSorted(arr, 5);
    assert(result == true);
}
//4.
void testOneElement() {
    int arr[] = {3};
    bool result = isSorted(arr, 1);
    assert(result == true);
}
//5.
void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    bool result = isSorted(arr, 5);
    assert(result == false);
}
//6.
void testNegativeArray() {
    int arr[] = {-5, -1, -4, -3, -2};
    bool result = isSorted(arr, 5);
    assert(result == false);
}
//7. (designed by me)
void testAllSameValues() {
    int arr[] = {5, 5, 5, 5, 5};
    bool result = isSorted(arr, 5);
    assert(result == true);
}
//8.
void testNegativelySortedValues() {
    int arr[] = {-1, -2, -3, -4, -5};
    bool result = isSorted(arr, 5);
    assert(result == false);
}

//main function
int main(){
    //test functions
    testSortedArray();
    testUnSortedArray();
    testDuplicateValues();
    testOneElement();
    testDescendingArray();
    testNegativeArray();
    testAllSameValues();
    testNegativelySortedValues();

}