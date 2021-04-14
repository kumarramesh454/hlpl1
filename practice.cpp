#include <iostream>
using namespace std;
// Structures
// struct employess
// {
//     int id;
//     char favChar;
//     float salary;

// };
// by using typedef you have to put just ep instead of struct employess
//  typedef struct employess
// {
//     int id;
//     char favChar;
//     float salary;

// }ep;

// union money
// {
//     int flour;
//     char bike;
//     float euro;

// };
int main()
{
    // use of enum(you will find the indexes)
    enum day {morning, noon, evening, night};
    day d1=evening;
    cout<<d1;
    // cout<<morning<<endl;
    // cout<<noon<<endl;
    // cout<<evening<<endl;
    // cout<<night<<endl;

    // union money m1;
    // m1.flour=45;
    // cout<<m1.flour<<endl;
 
    // ep ramesh;
    // ep kumar;
    // // struct employess ramesh;
    // // struct employess kumar;
    // ramesh.id=16;
    // ramesh.favChar='g';
    // ramesh.salary=200000;
    // kumar.id=67;
    // kumar.favChar='a';
    // kumar.salary=100000;
    // cout<<"ramesh's data"<<endl;
    // cout<<"The id number is "<<ramesh.id<<endl;
    // cout<<"The character is "<<ramesh.favChar<<endl;
    // cout<<"The salary is "<<ramesh.salary<<endl;
    // cout<<"kumar's data"<<endl;
    // cout<<"The id number is "<<kumar.id<<endl;
    // cout<<"The character is "<<kumar.favChar<<endl;
    // cout<<"The salary is "<<kumar.salary<<endl;
    
    // pointer's example
    //    int a=3;
    //    int* b=&a;

    //      cout<<"The address of b is "<<b<<endl;
    //      cout<<"The address of b is "<<&a<<endl;
    //      cout<<"The value of b is "<<*b<<endl;

    // another example
    //    string food="pizza";
    //    string* ptr=&food;
    //    cout<<ptr<<endl;
    //    cout<<&food<<endl;
    //    cout<<*ptr<<endl;
    // array's example
    // int physics[7] = {34, 45, 65, 76, 87, 87, 43};
    // //  you can change the marks any time
    // physics[4] = 99;
    // physics[6] = 98;
    // // we can use pointer arthemetics in array
    // int* p=physics;
    // cout<<*(p++)<<endl;
    // cout<<*(p)<<endl;
    // cout<<*(++p)<<endl;
    // cout<<*(p+1)<<endl;
    // cout<<*(p+2)<<endl;
    // cout<<*(--p)<<endl;
    
    // cout<<*(p)<<endl;
    // cout<<*(p+1)<<endl;
    // cout<<*(p+2)<<endl;
    // cout<<*(p+3)<<endl;
    // cout<<*(p+4)<<endl;
    // cout<<*(p+5)<<endl;
    // cout<<*(p+6)<<endl;

    //  cout<<"The physics marks of student are following"<<endl;
    //  cout<<"ramesh's marks are "<<physics[0]<<endl;
    //  cout<<"vijay's marks are "<<physics[1]<<endl;
    //  cout<<"kumar's marks are "<<physics[2]<<endl;
    //  cout<<"dharam's marks are "<<physics[3]<<endl;
    //  cout<<"safdar's marks are "<<physics[4]<<endl;
    //  cout<<"mashhood's marks are "<<physics[5]<<endl;
    //  cout<<"awais's marks are "<<physics[6]<<endl;

    // you can use loop also in the array
    // for loop
    // for (int i = 0; i < 7; i++)
    //   {
    //       cout<<"The value of marks at "<<i<< " is " <<physics[i]<<endl;

    //   }
    // while loop
    // int i = 0;
    // while (i < 7)
    // {
    //     cout << "The value of marks at " << i << " is " << physics[i] << endl;
    //     i++;
    // }

    // //   do while loop
    // int i = 0;
    // do
    // {
    //     cout << "The value of marks at " << i << " is " << physics[i] << endl;
    //     i++;
    // } while (i < 7);

    return 0;
}
