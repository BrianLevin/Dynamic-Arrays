  
#include <iostream>

using namespace std;

// function to display array values
void print (const int *const arr, size_t size) // constant poointer cant change what its pointing to display function
cout << "[ ";
for(size_t i{0}; i<size; ++i)
cout << arr[i] << " ";
cout << "]" // display values once for loop iterates 5 times
cout << endl;

int main(){
const size_t array1_size {5}; // size of the array
 
 int array1[] {1,2,3,4,5}; // array holding the values

  cout << "Array 1: " ; // print array 1 output
    print(array1,array1_size);

    return 0;
}