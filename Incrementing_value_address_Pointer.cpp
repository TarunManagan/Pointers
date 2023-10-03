#include <iostream>
using namespace std;
int main(){
   int a=10,*aptr; //Declaring pointer
   aptr= &a; 
   cout<<"The original value of a is: "<<*aptr<<endl;
   cout<<"The original address of a is: "<<aptr<<endl;
   *aptr=*aptr+1; //Incrementing the value of a by 1
   aptr++;
   &aptr= *aptr; //Assigning the new address of incremented a
   cout<<"The incremented value of a is: "<<*aptr<<endl;
   cout<<"The new address of a is: "<<aptr<<endl;
    return 0;
}
/*OUPUT
The original value of a is: 10
The original address of a is: 0x7ffee6ade564
The incremented value of a is: 11
The new address of a is: 0x7ffee6ade568
*/
