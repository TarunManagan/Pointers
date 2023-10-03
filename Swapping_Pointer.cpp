#include <iostream>
using namespace std;

void swap(int *a, int *b){ //Getting the values of a and b as parameters
  //Swapping 2 numbers using pointer
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
 }
int main(){
   int a=10,b=15;
   cout<<"The original value of a and b is: "<<a<<"\t"<<b<<endl;
   swap(&a,&b); //Passing the address of a and b as argument
   cout<<"The value of a and b after swapping is: "<<a<<"\t"<<b<<endl;
   return 0;
}
/*OUPUT
The original value of a and b are: 10	15
The value of a and b after swapping is: 15	10
*/
