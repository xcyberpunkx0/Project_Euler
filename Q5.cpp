#include<iostream>

using namespace std;


int main()
{   int lcm=20;
      while(1){
        if( lcm%18==0 && lcm%11==0 && lcm%12==0&& lcm%13==0 && lcm%14==0 && lcm%15==0 && lcm%16==0 && lcm%17==0 && lcm%19==0 && lcm%20==0){
            cout<<lcm;
            break;
        }
        lcm++;



    }
    return 0;
}



