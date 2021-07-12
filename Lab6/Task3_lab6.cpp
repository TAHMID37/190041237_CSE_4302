#include <iostream>
#include <math.h>
using namespace std;


class coordinate
{
private:
    float x;
    float y;

public:

    coordinate(float a, float b):x(a),y(b)
    {

    }

    float getdistance(coordinate c);

    float getdistance();

    void move_x(float val)
    {
        x+=val;
    }

    void move_y(float val)
    {
        y+=val;
    }

    void move(float val)
    {
        move_x(val);
        move_y(val);
    }

    //binary

    friend bool operator >(coordinate c1,coordinate c2);
    friend bool operator <(coordinate c1,coordinate c2);

    friend bool operator >=(coordinate c1,coordinate c2);

    friend bool operator <=(coordinate c1,coordinate c2);

    friend bool operator ==(coordinate c1,coordinate c2);

    friend bool operator !=(coordinate c1,coordinate c2);


    //unary

    coordinate operator ++()
    {
        return coordinate(++x,++y);
    }

    coordinate operator ++(int)
    {
        return coordinate(x++,y++);
    }


    coordinate operator --()
    {
        return coordinate(--x,--y);
    }

    coordinate operator --(int)
    {
        return coordinate(x--,y--);

    }



    ~coordinate()
    {

    }

    void display( ) const
    {
        cout<<x<<" "<<y<<endl;
    }




};


float coordinate:: getdistance(coordinate c)
{

    float x1= fabs(x-c.x);
    x1*=x1;
    float y1=fabs(y-c.y);
    y1*=y1;

    float ans=sqrt(x1+y1);

    return ans;

}


float coordinate:: getdistance()
{

    float x1= fabs(0-x);
    x1*=x1;
    float y1=fabs(0-y);
    y1*=y1;

    float ans=sqrt(x1+y1);

    return ans;

}

bool operator >(coordinate c1,coordinate c2)
{
    float dis1=c1.getdistance();
    float dis2=c2.getdistance();

    return dis1>dis2;
}


bool operator <(coordinate c1,coordinate c2)
{
    float dis1=c1.getdistance();
    float dis2=c2.getdistance();

    return dis1<dis2;
}

bool operator >=(coordinate c1,coordinate c2)
{
    float dis1=c1.getdistance();
    float dis2=c2.getdistance();

    return dis1>=dis2;
}

bool operator <=(coordinate c1,coordinate c2)
{
    float dis1=c1.getdistance();
    float dis2=c2.getdistance();

    return dis1<=dis2;

}


bool operator ==(coordinate c1,coordinate c2)
{
    float dis1=c1.getdistance();
    float dis2=c2.getdistance();

    return (dis1==dis2);

}

bool operator !=(coordinate c1,coordinate c2)
{
    float dis1=c1.getdistance();
    float dis2=c2.getdistance();

    return (dis1!=dis2);

}


int main()
{
    coordinate c1(3,4);
    coordinate c2(1, 1);
    cout<<c1.getdistance()<<endl;  //5
    cout<<c2.getdistance(c1)<<endl; // 3.60555
    c1.display(); // 3 4
    c1.move_x(10);
    c1.move_y(10);
    c1.display();  // 13 14

    cout<<(c2>c1)<<endl; //0
    cout<<(c1>c2)<<endl; //1

    cout<<(c2<c1)<<endl;
    cout<<(c1<c2)<<endl;

    coordinate c3(1,-1);

    cout<<(c2>=c3)<<endl; //1

    cout<<(c2<=c1)<<endl; //1


    cout<<(c2==c3)<<endl; //1

    cout<<(c2!=c1)<<endl; //1


    c1++;
    c1.display(); // 14 15

    ++c2;
    c2.display(); // 2 2

    c3--;
    c3.display(); // 0 -2

    --c2;
    c2.display(); // 1 1






}
