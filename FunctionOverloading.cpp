#include <iostream>
using namespace std;

int abs (int i);
double abs (double d);
long abs (long l);

int main () {
  cout <<abs(-10)<<endl;
  cout <<abs(-11.0)<<endl;
  cout <<abs(-9L)<<endl;
  return 0;
}

int abs(int i){
  cout<< "using integer abs() "<<endl;
  return i<0 ? -i:i;
}

double abs(double d){
  cout<< "using double abs() "<<endl;
  return d<0.0 ? -d:d;
}
long abs(long l){
  cout<< "using long abs() "<<endl;
  return l<0 ? -l:l;
}
