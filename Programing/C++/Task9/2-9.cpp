#include<iostream>
using namespace std ;
class stack
{
    int top ;
    int size ;
    int *ptr ;
public:
    stack(int s )
    {

        size = s;
        ptr = new int[size];
        top = -1 ;
    }

     stack(const stack &other) {
        size = other.size;
        top = other.top;
        ptr = new int[size];
        for (int i = 0; i <= top; i++) {
            ptr[i] = other.ptr[i];
        }
    }

     ~stack() {
        delete[] ptr;
    }

    bool isFull(){
        return top == size -1 ;

    }
    bool isEmpty(){
      return top == -1 ;
    }

    void push(int value ){
        if((isFull())){

            cout << "Stack Overflow! Cannot push " << value << endl;
            return;

        }
        ptr[++top] = value;
        cout << value << " pushed into stack." << endl;

    }
    int pop(){
        if((isEmpty())){
             cout << "Stack Underflow! Cannot pop." << endl;
            return -1;

        }
        return ptr[top--];

    }

   int peek(){
    if(isEmpty()){
        cout << "Stack is empty! Nothing to peek." << endl;
        return -1;
    }
    return ptr[top];
}


void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }


};


int main() {
    stack s1(5);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();


    stack s2 = s1;
    s2.push(40);

    cout << "Stack s1: ";
    s1.display();

    cout << "Stack s2: ";
    s2.display();

    return 0;
}
