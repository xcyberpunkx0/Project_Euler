#include<iostream>

using namespace std;

int main(){

int i,j,c;

for(i=1;i<=500;i++){
        for(j=1;j<=500;j++){
            c=1000-i-j;
            if(i*i+j*j-c*c==0&&i<j){
                cout<<"a * b * c = "<<i*j*c;
            }

        }
}



return 0;

}
