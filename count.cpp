#include <iostream>
using namespace std;
int countDigit(int n)
{
  int count =0;
  while (n!=0)
    {
      n=n/10;
      count++;
      
    }
   return count;
}
int main() {
  int n;
  cout <<"Enter integer number: ";
  cin >>n;
  cout << countDigit(n) << endl;
  return 0;
  
}
