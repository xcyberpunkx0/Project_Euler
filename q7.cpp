#include<iostream>
#include<math.h>

using namespace std;

int check(long n){

    if(n <= 0 || n == 1 || (n % 2 == 0 && n != 2)){  return 0;         }

        for(int i=3;i<=sqrt(n);i+=2){

                if(n%i==0){return 0; }
                                        }
        return 1;
}

int main(){
    int c=0,n=1;
            while (c!=10001){
                if(check(n)){c++;}

                ++n;

                        }
                cout<<n-1;

return 0;


}
