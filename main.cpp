  
#include <iostream>

using namespace std;

// function to display array values
void print (const int *const arr, size_t size) // constant poointer cant change what its pointing to display function
cout << "[ ";
for(size_t i{0}; i<size; ++i)
cout << arr[i] << " ";
cout << "]"
cout << endl;

int main(){

 

    return 0;
}