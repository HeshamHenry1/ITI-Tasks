#include<iostream>
using namespace std;
void swap(int &x ,int &y);
int main(){
    int x, y ;
    cout<<"Enter First Number : ";
    cin>>x;
    cout<<"Enter second Number : ";
    cin>>y;
    swap(x,y);
    cout<<"After swap  First = "<<x<<endl;
    cout<<"After swap  second = "<<y<<endl;







return 0;
}

void swap(int &x ,int &y){
int temp;
temp = x;
x=y;
y= temp;

}


