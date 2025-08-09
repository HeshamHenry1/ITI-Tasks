#include<iostream>
using namespace std ;
#define max 100
class stack
{
    int data[max];
    int top ;
public :

    stack()
    {
        top = -1 ;
    }
    bool isFull()
    {

      return   top == max-1;
    }
     bool isEmpty() {
        return top == -1;
    }
    void push(int value){
        if((isFull())){
         cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        top++;
        data[top]= value;
          cout << value << " pushed into stack." << endl;


    }
    int pop(){
        if(top==-1){
                cout << "Stack Underflow! Cannot pop." << endl;
             return -1;

        }
        int popedvalue = data[top];
        top-- ;
        return popedvalue;

    }
    int peek(){
        if((isEmpty())){
                cout << "Stack is empty! Nothing to peek." << endl;
            return -1;

        }
        return data[top];

    }

    void display() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}



};

int main() {
    stack s;
    s.push(5);
    s.push(10);
    s.push(15);

    s.display();

    cout << "Top element is: " << s.peek() << endl;

    cout << s.pop() << " popped from stack." << endl;

    s.display();

    return 0;
}
