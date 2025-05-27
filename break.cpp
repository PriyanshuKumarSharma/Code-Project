#include <iostream>
using namespace  std;
int main(){
    //break statement using while loop//
    int i=1;
    while(i<=10){
        if(i==4){
            break;
        }else{
            cout<<i<<" ";
        }
        i++;
    }
}