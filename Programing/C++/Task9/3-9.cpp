#include<iostream>
using namespace std;
class complex
{
    double real ;
    double image ;
public :
    complex()
    {
        real = 0 ;
        image = 0 ;
    }
    complex(double r , double i )
    {
        real = r ;
        image  = i ;

    }
    complex add (const complex &c )
    {
        return complex(real+c.real , image+c.image);

    }
    complex sub (const complex &c )
    {
        return complex(real-c.real , image-c.image);

    }
   complex mult(const complex &c)
{
    double r = real * c.real - image * c.image;
    double i = real * c.image + image * c.real;
    return complex(r, i);
}
   complex div(const complex &c)
{
    double denominator = c.real * c.real + c.image * c.image;
    if (denominator == 0) {
        cout << "Error: Division by zero!" << endl;
        return complex(0, 0);
    }
    double r = (real * c.real + image * c.image) / denominator;
    double i = (image * c.real - real * c.image) / denominator;
    return complex(r, i);
}

      void display() {
        if (image >= 0)
            cout << real << " + " << image << "i" << endl;
        else
            cout << real << " - " << -image << "i" << endl;
    }


};


int main() {
    complex c1(4, 5);
    complex c2(2, -3);

    complex c3 = c1.add(c2);
    cout << "Addition: ";
    c3.display();

    complex c4 = c1.sub(c2);
    cout << "Subtraction: ";
    c4.display();

    complex c5 = c1.mult(c2);
    cout << "Multiplication: ";
    c5.display();

    complex c6 = c1.div(c2);
    cout << "Division: ";
    c6.display();

    return 0;
}


