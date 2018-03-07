#include <iostream>
using namespace std;

int main(){
  float large (float arr[], int n);

  char ch;
  int i=0;
  float amount[50], biggest;

  for (i =0 ; i <50; ++i){
    cout<<"ennter element no."<<(i+1)<<endl;
    cin>>amount[i];
    cout<<"more elements (y/n)"<<endl;
    cin>>ch;
    if (ch!='y'){
      break;
    }
}
    if (i<50)
      i++;
    biggest = large(amount, i);
    cout<<"the largest element of the array is "<<biggest<<endl;

}

float large (float arr[],int n){
  float max= arr[0];
  for (int j=1; j<n; ++j){
    if (arr[j] > max)
      max = arr[j];
  }
  return max;
}
