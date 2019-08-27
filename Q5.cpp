#include<iostream>

using namespace std;

int lcm(long,long);
int hcf(long,long);

int lcm(long x,long y){

         long lcm;
         lcm=(x*y)/hcf(x,y);

         return lcm;
}


int hcf(long x,long y){
    
         while(x!=y){
            if(x>y){    x=x-y;      }
            else { y=y-x;}  }

        }





int main(){

long a=1;

for(long i=11;i<=20;i++){
        a=lcm(a,i);


}

cout<<"LCM "<<a;

return 0;
}

