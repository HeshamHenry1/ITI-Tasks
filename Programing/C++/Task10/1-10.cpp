#include<iostream>
using namespace std;

class complex
{
    double real;
    double image;
public:
    complex()
    {
        real = 0;
        image = 0;
    }
    complex(double r, double i)
    {
        real = r;
        image = i;
    }


    complex operator+(const complex &c)
    {
        return complex(real + c.real, image + c.image);
    }


    complex operator-(const complex &c)
    {
        return complex(real - c.real, image - c.image);
    }


    complex operator*(const complex &c)
    {
        double r = real * c.real - image * c.image;
        double i = real * c.image + image * c.real;
        return complex(r, i);
    }


    complex operator/(const complex &c)
    {
        double denominator = c.real * c.real + c.image * c.image;
        if (denominator == 0)
        {
            cerr << "Error: Division by zero!" << endl;
            return complex(0, 0);
        }
        double r = (real * c.real + image * c.image) / denominator;
        double i = (image * c.real - real * c.image) / denominator;
        return complex(r, i);
    }


    complex operator-()
    {
        return complex(-real, -image);
    }


    friend ostream &operator<<(ostream &out, const complex &c)
    {
        if (c.image >= 0)
            out << c.real << " + " << c.image << "i";
        else
            out << c.real << " - " << -c.image << "i";
        return out;
    }


    friend istream &operator>>(istream &in, complex &c)
    {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.image;
        return in;
    }
};

int main()
{
    complex c1, c2, c3;


    std::cout << "Enter complex number c1:\n";
    std::cin >> c1;
    std::cout << "Enter complex number c2:\n";
    std::cin >> c2;


    std::cout << "c1 = " << c1 << std::endl;
    std::cout << "c2 = " << c2 << std::endl;


    c3 = c1 + c2;
    std::cout << "c1 + c2 = " << c3 << std::endl;


    c3 = c1 - c2;
    std::cout << "c1 - c2 = " << c3 << std::endl;


    c3 = c1 * c2;
    std::cout << "c1 * c2 = " << c3 << std::endl;


    c3 = c1 / c2;
    std::cout << "c1 / c2 = " << c3 << std::endl;


    c3 = -c1;
    std::cout << "-c1 = " << c3 << std::endl;

    return 0;
}

