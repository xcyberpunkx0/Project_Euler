#include<iostream>
#include<math.h>
using namespace std;

int main(){
unsigned long i=3,f=1,j,s=0;
while(i<=200000){


        for(j=3;j<sqrt(i);j+=2){
                if(i%j==0){f=0;}
                                    }

        if(f==1){ s=s+i+2;      }

            i+=2;


            f=1;

}

cout<<s;
return 0;

}
