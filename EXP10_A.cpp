//SARA KANYAL
//23070123115
//EXPERIMENT 10A 
//calling by value 
#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int num = x;
    x = y;
    y = num;
}

int main() 
{
    int a = 10, b = 2;
    swap(a, b);  // Pass by reference
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
    return 0;
}