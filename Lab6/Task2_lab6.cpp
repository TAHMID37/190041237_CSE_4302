#include <bits/stdc++.h>
using namespace std;


class matrix3d{

private:
    double arr[3][3];
public:

    matrix3d()
    {
        memset(arr,0,sizeof(arr));
    }


    matrix3d(double a11, double a12, double a13, double a21 ,double a22,double a23, double a31, double a32, double a33 )
    {
          arr[0][0]=a11, arr[0][1]=a12, arr[0][2]=a13;
          arr[1][0]=a21, arr[1][1]=a22, arr[1][2]=a23;
          arr[2][0]=a31, arr[2][1]=a32, arr[2][2]=a33;
    }


    ~matrix3d()
    {

    }

    void display() const
    {
        int i,j;

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
    }


    double det()
    {
        double a11=arr[0][0],a12=arr[0][1],a13=arr[0][2];
        double a21=arr[1][0],a22=arr[1][1],a23=arr[1][2];
        double a31=arr[2][0],a32=arr[2][1],a33=arr[2][2];

        return a11*(a22*a33-a23*a32) - a12*(a21*a33-a23*a31) + a13*(a21*a32-a22*a31);
    }


    matrix3d transpose()
    {
        double a11=arr[0][0],a12=arr[0][1],a13=arr[0][2];
        double a21=arr[1][0],a22=arr[1][1],a23=arr[1][2];
        double a31=arr[2][0],a32=arr[2][1],a33=arr[2][2];

        return matrix3d(a11,a21,a31,a12,a22,a32,a13,a23,a33);

    }

    matrix3d cofactor()
    {
        double a11=arr[0][0],a12=arr[0][1],a13=arr[0][2];
        double a21=arr[1][0],a22=arr[1][1],a23=arr[1][2];
        double a31=arr[2][0],a32=arr[2][1],a33=arr[2][2];

        double a, b, c, d, e, f, g, h, i;

        a = a22*a33 - a23*a32;  b = a21*a33 - a23*a31;  c = a21*a32 - a22*a31;
        d = a12*a33 - a13*a32;  e = a11*a33 - a13*a31;  f = a11*a32 - a12*a31;
        g = a12*a23 - a13*a22;  h = a11*a23 - a13*a21;  i = a11*a22 - a12*a21;

        return matrix3d (a, -b, c, -d, e, -f, g, -h, i);

    }

    friend matrix3d operator +(matrix3d m1,matrix3d m2);

    friend matrix3d operator -(matrix3d m1,matrix3d m2);

    friend matrix3d operator * (matrix3d m1,matrix3d m2);

    matrix3d operator * (double x)
    {
        double a11=arr[0][0],a12=arr[0][1],a13=arr[0][2];
        double a21=arr[1][0],a22=arr[1][1],a23=arr[1][2];
        double a31=arr[2][0],a32=arr[2][1],a33=arr[2][2];


        double a, b, c, d, e, f, g, h, i;
        a = x * a11;    b = x * a12;    c = x * a13;
        d = x * a21;    e = x * a22;    f = x * a23;
        g = x * a31;    h = x * a32;    i = x * a33;
        return matrix3d (a, b, c, d, e, f, g, h, i);
    }





    matrix3d inverse()
    {
        if(det()==0)
            exit(1);
        return ((transpose()).cofactor())*(1/det());
    }









};


matrix3d operator +(matrix3d m1,matrix3d m2)
{
        double a11=m1.arr[0][0],a12=m1.arr[0][1],a13=m1.arr[0][2];
        double a21=m1.arr[1][0],a22=m1.arr[1][1],a23=m1.arr[1][2];
        double a31=m1.arr[2][0],a32=m1.arr[2][1],a33=m1.arr[2][2];

        double b11=m2.arr[0][0],b12=m2.arr[0][1],b13=m2.arr[0][2];
        double b21=m2.arr[1][0],b22=m2.arr[1][1],b23=m2.arr[1][2];
        double b31=m2.arr[2][0],b32=m2.arr[2][1],b33=m2.arr[2][2];

        double a, b, c, d, e, f, g, h, i;
        a = a11 + b11;    b = a12 + b12;    c = a13 + b13;
        d = a21 + b21;    e = a22 + b22;    f = a23 + b23;
        g = a31 + b31;    h = a32 + b32;    i = a33 + b33;

        return matrix3d (a, b, c, d, e, f, g, h, i);



}

matrix3d operator -(matrix3d m1,matrix3d m2)
{
        double a11=m1.arr[0][0],a12=m1.arr[0][1],a13=m1.arr[0][2];
        double a21=m1.arr[1][0],a22=m1.arr[1][1],a23=m1.arr[1][2];
        double a31=m1.arr[2][0],a32=m1.arr[2][1],a33=m1.arr[2][2];

        double b11=m2.arr[0][0],b12=m2.arr[0][1],b13=m2.arr[0][2];
        double b21=m2.arr[1][0],b22=m2.arr[1][1],b23=m2.arr[1][2];
        double b31=m2.arr[2][0],b32=m2.arr[2][1],b33=m2.arr[2][2];

        double a, b, c, d, e, f, g, h, i;
        a = a11 - b11;    b = a12 - b12;    c = a13 - b13;
        d = a21 - b21;    e = a22 - b22;    f = a23 - b23;
        g = a31 - b31;    h = a32 - b32;    i = a33 - b33;

        return matrix3d (a, b, c, d, e, f, g, h, i);


}

matrix3d operator * (matrix3d m1,matrix3d m2)
{
        double a11=m1.arr[0][0],a12=m1.arr[0][1],a13=m1.arr[0][2];
        double a21=m1.arr[1][0],a22=m1.arr[1][1],a23=m1.arr[1][2];
        double a31=m1.arr[2][0],a32=m1.arr[2][1],a33=m1.arr[2][2];

        double b11=m2.arr[0][0],b12=m2.arr[0][1],b13=m2.arr[0][2];
        double b21=m2.arr[1][0],b22=m2.arr[1][1],b23=m2.arr[1][2];
        double b31=m2.arr[2][0],b32=m2.arr[2][1],b33=m2.arr[2][2];

        double a, b, c, d, e, f, g, h, i;
        a = (a11*b11)+(a12*b21)+(a13*b31);    b = (a11*b12) + (a12*b22) + (a13*b32);    c = (a11*b13) + (a12*b23) + (a13*b33);
        d = (a21*b11)+(a22*b21)+(a23*b31);    e = (a21*b12) + (a22*b22) + (a23*b32);    f = (a21*b13) + (a22*b23) + (a23*b33);
        g = (a31*b11)+(a32*b21)+(a33*b31);    h = (a31*b12) + (a32*b22) + (a33*b32);    i = (a31*b13) + (a32*b23) + (a33*b33);
        return matrix3d (a, b, c, d, e, f, g, h, i);



}


int main()
{
    matrix3d m1(1,2,3, 4,5,6, 7,6,0);
    m1.display();

    //Det

    cout<<m1.det()<<endl;

    matrix3d m2;

    m2=m1.transpose();
    m2.display();

    matrix3d m3;

    //  +
    m3=m1+m2;

    m3.display();

    // -
    m1=m3-m2;

    m1.display();

    m2=m1.transpose();

    m2.display();

    // *

    m3=m1*m2;

    m3.display();


    //INVERSE

    m3=m3.inverse();


    m3.display();





}
