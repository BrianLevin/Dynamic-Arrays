  
#include <iostream>

using namespace std;
// return pointer address to an integer,
// the integers and pointers to the array are constant just changing the new array 

int *apply_all(const int *const arr1, size_t size1, const int * const arr2, size_t size2) {

int *new_array {};
new_array = new int[size1 * size2]; // neww array size

int position {0};
    for (size_t i{0}; i < size2; ++i) {
        for (size_t j{0}; j< size1; ++j) {
            new_array[position] = arr1[j] * arr2[i];
            ++position;
        }
    }
    return new_array;
}

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