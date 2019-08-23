#include<iostream>

using namespace std;

int check(long n){
int c=0;
for(int i=2;i<n;i++){
    if(n%i==0){return 0; }
}
return 1;
}

int main(){
    int c=0,n=2;
while (1){
    if(check(n)){c++;}
    if(c==10001){cout<<n; break;}
    n++;

}


return 0;


}

