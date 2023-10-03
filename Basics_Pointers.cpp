#include <iostream>
using namespace std;
int main(){
   int a=10,*aptr; //Declaring pointer
   aptr=&a; //Assigning the address of a to aptr --> '&' is the address operator
   cout<<"The original value of a is: "<<*aptr<<endl;
   cout<<"The address of a is: "<<aptr<<endl;
   *aptr=15; //Changing the value of a from 10 to 15
   cout<<"The new value of a is: "<<*aptr;
    return 0;
}
/*OUPUT
The original value of a is: 10
The address of a is: 0x7fff6d64eef4
The new value of a is: 15
*/
