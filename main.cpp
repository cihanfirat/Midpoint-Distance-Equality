#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    float x;
    float y;

public:


    Point()//default const.
    {
        x=1;
        y=1;
    }
    Point(float a ,float b)//const with parameters
    {
        x=a;
        y=b;
    }

    void Display()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
        cout<<"-----"<<endl;
    }

    void Compare(Point p, Point r)
    {

        if(p.x==r.x&&p.y==r.y)
        {
            cout<<" Same points"<<endl;
        }
        else{cout<<" Different points"<<endl;}
    }

    float Distance(Point p, Point r)
    {
        return sqrt(pow(p.x-r.x,2)+pow(p.y-r.y,2));
    }

    Point Midpoint(Point p, Point r)
    {
        Point mid;
        mid.x=(p.x+r.x)/2;
        mid.y=(p.y+r.y)/2;
        return mid;
    }


};
int main()
{
    Point A,B(2,2),C(3,3),D;
    cout<<"Creation of points : "<<endl;

    cout<<"A";
    A.Display();
    cout<<"B";
    B.Display();
    cout<<"C";
    C.Display();

    cout<<"The distance between A and B : "<<A.Distance(A,B)<<endl;

    cout<<"The middle between A and C : "<<endl;
    D=A.Midpoint(A,C);
    cout<<"M";
    D.Display();

    cout<<"compare:"<<endl;
    cout<<"Compare A and C"<<endl;
    A.Compare(A,C);
    cout<<"Compare B and C"<<endl;
    B.Compare(B,C);
    cout<<"Compare A and B"<<endl;
    A.Compare(A,B);

    return 0;
}
