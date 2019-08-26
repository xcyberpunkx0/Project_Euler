#include <iostream>
using namespace std;
int main()
{
    int lcm=0,a=1,b;

    for(int i=11;i<=20;i++){
            int b=i;

                    if(a>b) {   lcm=a;            }
                        else{    lcm=b;         }

        while(lcm%a==0&&lcm%b==0){
            

                a=lcm;
               
            lcm++;

        } 
    }

cout<<lcm;



return 0;
}
