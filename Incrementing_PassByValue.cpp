#include <iostream>
using namespace std;

void increment(int a){ //Gets the value of a
    a++; //Increments a by 1
 }
int main(){
   int a=10;
   cout<<"The original value of a: "<<a<<endl;
   increment(a); //Passing the value of a as the argument
   cout<<"The incremented value of a is: "<<a<<endl;
   return 0;
}
/*OUPUT
The original value of a: 10
The incremented value of a is: 11
*/
