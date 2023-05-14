#include<iostream>
using namespace  std;
int main(){
    int i=0;
    i = i++ - --i + ++i  - i--;
    //0       //o  //1 //1
    cout<<i<<endl;
    return 0 ;
}
