#include<iostream>

using namespace std;

int main(){
  long long int c=1,i,j,m=999999999999;
    for(i=2;i<m;i++){
        for(j=2;j<i;j++){
			if(i%j!=0){ c++;
                if(c==10001){cout<<"Number : "<<i; break;break;}

			}  } }








return 0;




}
