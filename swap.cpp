#include <iostream>
using namespace std;
void swap (int *x, int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
  return;
}
int main (){
  int a = 100;
  int b = 200;

  swap (a,b);//calling the swap function
  cout<<"the value of 'a' after swap "<<a<<endl;
  cout<<"the value of 'b' after swap "<<b<<endl;
}
