#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main (){
    bool a = false , b =  false, c = false, d = true;
    string pass;
    cout << "Input the password: ";
	getline(cin, pass);
// checking the entered password at least 8 char
   if ( pass.length() >= 8)
     a = true;
// checking the password that always start with digit
   if (isdigit(pass[0])== 1)
    b = true;
   for ( int i = 1 ; i < pass.length(); i++ ){
// checking the password wheather contain capital letters or not   
    if (isupper(pass[i]) == 1)
    c = true; 
// checking the password that consist of only digit and letters
    if ( isdigit(pass[i]) == 0 && isupper(pass[i])== 0 && islower(pass[i])== 0)
    d = false;}
    if ( a && b && c && d )  
     cout << " valid password ";
    else 
     cout << " invalid password ";
return 0;
}
