#include <iostream>
using namespace std;

int main() {
  int n, sum=0,remainder;
  cout <<"Enter integer number:" << endl;
  cin >>n;
  while (n>0){
    remainder = n%10;
    sum = sum + remainder;
    n = n/10;
    }
  cout << "Sum of digit is: " << sum;
  return 0;
}
