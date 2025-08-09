#include<iostream>
namespace f1
{

    int sum(int x , int y)
    {

      return x+ y ;
    }
}

namespace f2
{

    int sum(int x , int y)
    {

      return x+ y ;
    }
}

using namespace std;
int main(){
    int x = 5;
    int y = 6;
    cout <<"print function using namespace 1 : "<<f1::sum(x,y)<<endl;
    cout <<"print function using namespace 2 : "<<f2::sum(x,y)<<endl;



return 0 ;

}
