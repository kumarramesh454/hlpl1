#include <iostream>
using namespace std;
// function
// formal parameter will be taking the value of actual parameter
// int sum(int a, int b, int c) a b and c are formal parameters
// {
//     int d = a + b + c;
//     return d;
// }
// prototype function
// int sum(int a,int b,int c); ...acceptable
   int sum(int,int,int); /*also acceptable*/
   void g();
int main()
{
    int num1, num2, num3;
    // num1,num2 and num3 are actual parameter 
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;
    cout << "Enter the third number" << endl;
    cin >> num3;
    if (num1 == num2)
    {
        cout << "invalid number" << endl;
    }
    else
    {
        cout << "The sum of num1, num2 and num3 are " << sum(num1, num2, num3) << endl;
    }
 
    g();
    return 0;
}
// void function
void g(){
    cout<<"Hello, GoodMorning ";
}
   // by using prototype function you can put the function after the main function
    int sum(int a, int b, int c)
{
    int d = a + b + c;
    return d;
}
