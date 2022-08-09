#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  float x;
  srand(time(0));// generate to show not the same number
  for (int i = 0; i < 5; i++){
    x = ((float)rand() / RAND_MAX) * 10;
    cout << x << "\t"; // generate number between[0,9]
  }
  return 0;
}
