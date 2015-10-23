// http://www.tutorialspoint.com/cplusplus/subscripting_operator_overloading.htm
//Ground up book page 343
#include <iostream>
#include <stdlib.h> //for exit(1)

using namespace std;

const int SIZE = 3;


class SaveArray {
  int arr[SIZE];

public:
  int i;
  SaveArray() {
    for (i = 0; i < SIZE; i++)
      arr[i] = i;
  }
  int &operator[](int i) {
    if (i > SIZE) {
      cout << "Out of Bounds" << endl;
      return arr[0];
    }
    return arr[i];
  }
};

template <class T>
class SaveArrayTemplate {
  T arr[SIZE];

public:
  int i;
  SaveArrayTemplate(int SIZE) {
    for (i = 0; i < SIZE; i++)
      arr[i] = i;
  }
  T &operator[](int i) {
    if (i > SIZE) {
      cout << "Out of Bounds" << endl;
      return arr[0];
//      exit(EXIT_FAILURE); //1 = EXIT_FAILURE/0 = EXIT_SUCCESS
    }
    return arr[i];
  }
};

class AType {
  int a[SIZE];

public:
  AType() {
    for (int i = 0; i < SIZE; i++)
      a[i] = i;
  }
  int &operator[](int i) { return a[i]; }
};


int main() {
  SaveArray a;
  cout << a.operator [](0) << endl;
  a[0] = 101; //[] on left of = need reference &operator Ground up book/C ref.
  cout << a[0] << endl;
  cout << a[1] << endl;
  cout << a[12] << endl;

  AType at;
  cout << at[0] << endl;
  cout << at[1] << endl;
  cout << at[2] << endl;
  cout << at[3] << endl; //out of bounds
  cout << at[4] << endl;

  SaveArrayTemplate<int> aint(SIZE);
  SaveArrayTemplate<double> dint(SIZE);
  cout << "Integer array" << endl;
  for(int i = 0; i < SIZE; i++) { aint[i] = i; }
  for(int i = 0; i < SIZE; i++) cout << aint[i] << " "; cout << endl;
  for(int i = 0; i < SIZE; i++) { dint[i] = i + 0.2; }
  for(int i = 0; i < SIZE; i++) cout << dint[i] << " "; cout << endl;
  aint[12];  //out of bounds
  dint[12];
         //dint.operator[](2) == dint[2]
  cout << dint.operator [](2) << " " << dint[2] << endl;
  return 0;
}
