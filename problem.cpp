#include <iostream>
using namespace std;
int main() {
    float a, b, c ;
    cout<< "Enter the sides of the triangles";
    cin>> a >> b >> c;
    if((a + b > c) && (a + c > b) && (b + c > a)) {
        if ((a ==b) && (b == c)) {
            cout << "The triangle is equilateral";
        } else if ((a ==b) || (b==c) || (a == c)) {
            cout << "The triangle is isosceles";
        } else if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b)) {
            cout << "The triangle is right angled";
        } else { 
            cout << "The triangle is scalene";
        }
    }else {
            cout << "The triangle is not valid";
        }
        return 0; 
        

}