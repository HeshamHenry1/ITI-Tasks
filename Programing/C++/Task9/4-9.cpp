#include<iostream>
using namespace std ;
class Point
{

    int x ;
    int y ;
public:
    Point()
    {
        x =0 ;
        y = 0 ;

    }
    Point(int px , int py )
    {

        x = px;
        y = py ;
    }
    Point Add(Point P1){
        Point Result ;
        Result.x = x + P1.x;
        Result.y = y + P1.y;
        return Result ;


    }

      Point Sub(Point P1){
        Point Result ;
        Result.x = x - P1.x;
        Result.y = y - P1.y;
        return Result ;

    }

    void Print() {
        cout << "(" << x << "," << y << ")" << endl;
    }


};


int main() {
      Point p1(2, 3);
    Point p2(4, 1);

    Point sum = p1.Add(p2);
    Point diff = p1.Sub(p2);

    cout << "Sum: ";
    sum.Print();

    cout << "Difference: ";
    diff.Print();

    return 0;
}


/*

#include<iostream>
using namespace std;

class Point {
    int x;
    int y;

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int px, int py) {
        x = px;
        y = py;
    }


    friend Point Add(Point p1, Point p2);
    friend Point Sub(Point p1, Point p2);
    friend void Print(Point p);
};


Point Add(Point p1, Point p2) {
    return Point(p1.x + p2.x, p1.y + p2.y);
}


Point Sub(Point p1, Point p2) {
    return Point(p1.x - p2.x, p1.y - p2.y);
}


void Print(Point p) {
    cout << "(" << p.x << "," << p.y << ")" << endl;
}


int main() {
    Point p1(2, 3);
    Point p2(4, 1);

    Point sum = Add(p1, p2);
    Point diff = Sub(p1, p2);

    cout << "Sum: ";
    Print(sum);

    cout << "Difference: ";
    Print(diff);

    return 0;
}



*/
