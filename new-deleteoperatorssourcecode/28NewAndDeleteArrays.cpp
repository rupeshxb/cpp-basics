#include <iostream>

using namespace std;

int main() {

  // declare an int pointer
  int* scaler_int;

  // declare a float pointer
  float* scaler_float;

  // memory allocation of array with 7 elements
  int* scaler_array = new int[7];

  // dynamically allocate memory to both the pointers
  scaler_int = new int;
  scaler_float = new float;

  // assign value to the memory
  *scaler_int = 7;
  *scaler_float = 7.75;
  for (int i = 0; i < 7; i++) {
    *(scaler_array + i) = i;
  }

  //printing values stored at memory location
  cout << *scaler_int << endl;
  cout << *scaler_float << endl;
  for (int i = 0; i < 7; i++) {
    cout << *(scaler_array + i) << " ";
  }

  // deallocating the memory
  delete scaler_int;
  delete scaler_float;
  delete[] scaler_array;

  return 0;
}
