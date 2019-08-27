#include <iostream>
using namespace std;
int main()
{
    int lcm=0,a=1,j=2,t;

    for(int i=11;i<=20;i++){
            int b=i;

                lcm=(a>b)?a:b;
                t=lcm;

        while(lcm%a!=0 || lcm%b!=0)
            {  lcm=t*j;
                j++;






        }  a=lcm;   j=2;
    }

cout<<lcm;



return 0;
}
