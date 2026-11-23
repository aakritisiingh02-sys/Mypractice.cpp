#include <iostream>
using namespace std;

int main () {
    char op; 
      cout << "Enter your operation";
   cin >> op;
   int a,b;
   cout << " Enter your Numbers";
   cin>> a>> b;
    switch (op){
        case '+':
        cout << a+b ;
        break;
        case '-':
        cout << a-b;
        break;
case '*':
 cout << a*b;
 break;
 case '/':
 if(b!=0) {
 cout << a/b;
 }else {
 cout << "Error: Division by Zero";
 } 
 break;
 default:
 cout << "Error: invalid operation";


    }
}
