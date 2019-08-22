#include<iostream>

using namespace std;

int check(int n){
int c=0;
for(int i=2;i<n;i++){
    if(n%i!=0){ c++;}
}

if(c==1){return 1;}
else{return 0;}
}

int main(){
    int c=0,d=0,n=2;
while (1){
        d=check(n);
    if(d==1){c++;}
    if(c==10001){break;cout<<n;}
    n++;
    d=0;
}


return 0;


}

