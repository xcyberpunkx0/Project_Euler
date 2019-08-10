#include<iostream>

using namespace std;

int main(){
int i,j,s,n,rw=0,r,q;

	for(i=100;i<1000;i++){
	     for(j=i;j<1000;j++){ n=i*j; q=n;
		while(q!=0){
		   r=q%10;
		   rw=rw*10+r;
		   q=q/10;  }
		   if(rw==n){ s=rw; }
		   rw=0;
	   } }
cout<<"Largest  palindrome 3 digit is : "<<s;

return 0;
}
