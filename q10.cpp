#include<iostream>
#include<math.h>

using namespace std;

int check(long long n){
        if((n % 2 == 0 )){  return 0;         }
                for(long long i=3;i<=sqrt(n);i++){
                        if(n%i==0){return 0; }
                         }
        return 1;
}

int main(){
    long long c=2000000,s=2;
            for(long long i=3;i<=c;i+=2){
                if(check(i)){s+=i; }


                        }

            cout<<s;


return 0;


}
