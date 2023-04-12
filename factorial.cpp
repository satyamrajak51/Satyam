#include<iostream>
#include<conio.h>
using namespace std;

    int ans=1;

    int fact(int num){
        

        if(num>=1){

            ans=ans*fact(num-1);   
        }
            return ans;
    
    }
int main(){

        int num;
        cout<<"Enter number : ";
        cin>>num;
        cout<<"Factorial of "<<num<<" : "<<fact(num);
}