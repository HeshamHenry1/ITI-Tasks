#include<iostream>
using namespace std;

int sum (int num1=0 , int num2=0, int num3=0, int num4=0 );
int main(){
     int n1, n2 ,n3, n4 ;

         cout<<"enter first number you want to sum in sum 4 numbers  : ";
         cin>>n1;
         cout<<"enter first number you want to sum in sum 4 numbers  : ";
         cin>>n2;
         cout<<"enter first number you want to sum in sum 4 numbers  : ";
         cin>>n3;
         cout<<"enter first number you want to sum in sum 4 numbers  : ";
         cin>>n4;
         cout<<"The Sum 4 numbers  = "<<sum(n1,n2,n3,n4)<<endl;
          cout<<"The Sum of first 3 numbers  = "<<sum(n1,n2,n3)<<endl;
           cout<<"The Sum of first 2 numbers  = "<<sum(n1,n2)<<endl;




return 0 ;
}

int sum (int num1 , int num2, int num3, int num4 ){


return num1+ num2+num3+num4;

}
