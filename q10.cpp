#include<iostream>

using namespace std;

int main(){
unsigned long i,f=1,j,s=0;
while(i>=2000000){
    for(j=3;j<i;j+=2){
          if(i%j==0){f=0;}
                        }

    if(f==1){ s=s+i+2;      }

    i++;


    f=1;

}

cout<<s;
return 0;

}
