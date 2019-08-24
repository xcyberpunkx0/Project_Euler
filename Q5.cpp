#include <iostream>
using namespace std;
int main()
{
    int lcm=0,a=1,b=20;

    for(int i=1;i<=20;i++){
            int b=i;

                    if(a>b) {   lcm=a;            }
                        else{    lcm=b;         }

        while(1){
            if(lcm%a==0&&lcm%b==0){

                a=lcm;
                break;
            }
            lcm++;

        }
    }

cout<<lcm;
