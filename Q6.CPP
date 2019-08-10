#include <iostream>
#include <math.h>
using namespace std;
int main(void){
    
    int i,s=0,l=0,m;
    
    for(i=1;i<=100;i++){
        s+=pow(i,2);
        l+=i;
    }
    l=pow(l,2);
    m=l-s;
    cout<<"Sum of Squares of First 100 Natural Numbers : "<<s<<endl;
    cout<<"Square of sum of First 100 Natural Numbers : "<<l<<endl;
    cout<<"Difference in sum of square and square of sum : "<<m;
    
    
    return 0;
}
