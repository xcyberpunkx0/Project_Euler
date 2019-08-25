#include<iostream.h>

using namespace std;

int main(){ 
	
	    long a=1,b=2,c,s=0;	
	    long n=4000000;
     
	    
	    
    `		while(n>0){
	    		c=a+b;
		    	a=b;
	    		b=c;
	    		if(c<n){ if(c%2==0){ s+=c; }
	    			else{ break; }         
		   }
   
	    
	    cout<<"Sum of Even valued Fibbonaci Sequence : "<<s;

return 0;
}
