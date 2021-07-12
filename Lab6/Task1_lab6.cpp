#include <iostream>
using namespace std;



class Counter
{
private:
    int count,add;
public:

    Counter():count(0),add(0)
    {

    }

    Counter(int c, int a):count(c),add(a)
    {

    }

    void setIncrementStep(int step_val)
    {
        //neg value not allowed
        if(step_val<0)
            exit(1);

        add=step_val;
    }
    void increment()
    {
        count+=add;
    }

    int getCount()
    {
        return count;
    }

    void resetCount()
    {
        count=0;
    }

    //c1 =c2+c3
    Counter operator +(Counter c3)
    {
        return Counter((count+c3.count),min(add,c3.add));
    }

    Counter operator +(int var)
    {
        return Counter((count+var),count);
    }

    friend Counter operator +(int var,Counter c1 );


    Counter operator ++()
    {
        return Counter(++count,add);
    }



    Counter operator ++(int)
    {
        return Counter(count++,add);
    }


};


Counter operator +(int var,Counter c1 )
{
    return Counter(var+c1.count,c1.count);
}





int main()
{

    Counter c1,c2;

    c1.setIncrementStep(10);
    c1.increment();
    c1.increment();   // c1 count 20
    cout<<c1.getCount()<<endl;


    c2.setIncrementStep(5);
    c2.increment();
    c2.increment();  //c2 count 10
    cout<<c2.getCount()<<endl;

    Counter c3;

    //c3=c1+c2;

    c3=c1+c2;

    cout<<c3.getCount()<<endl;// c3 30
    c3.increment();
    cout<<c3.getCount()<<endl; // c3 35


    c3=c2+10;

    cout<<c3.getCount()<<endl; //20

    c3=11+c2;

    cout<<c3.getCount()<<endl; //21


    c3=c2++;

    cout<<c3.getCount()<<endl; //10

    c3=++c2;

    cout<<c3.getCount()<<endl; //12


}
