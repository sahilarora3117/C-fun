#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int c;
void reverse (char *x, int beg, int end){
  if (beg >= end)
  return;
  c = *(x+end);
  *(x+beg)= *(x+end);
  *(x+end)= c;
  reverse(x, ++beg,--end);
}

int main (){
  char a[100];
  cin>>a;
  reverse(a,0,strlen(a)-1);
  cout<<a;
  return 0;
}
