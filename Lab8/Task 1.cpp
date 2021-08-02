#include <iostream>
#include <math.h>
using namespace std;
#define pi 3.1416

class shape{
    protected:
       int l1,l2;
       double r;

    public:

    shape():l1(0),l2(0),r(0)
       {
           cout<<"I am  a shape"<<endl;
       }

    void getl1()
    {
        cout<<"ENTER L1 : ";
        cin>>l1;
    }

    void getl2()
    {
        cout<<"ENTER L2 : ";
        cin>>l2;
    }

    void getr()
    {
        cout<<"ENTER r : ";
        cin>>r;
    }

};


class twodimensional: public shape{

   public:

   double area,perimeter;

       twodimensional():area(0),perimeter(0)
       {
           cout<<"I am a twodimensional shape"<<endl;
       }

};

class threedimensional: public shape{

   public:

   double sur_area,volume;

       threedimensional():sur_area(0),volume(0)
       {
           cout<<"I am a threedimensional shape"<<endl;
       }
};

class square : public twodimensional{

 public:
      square()
      {
          cout<<"I am a square shape"<<endl;
      }

      void getlen()
      {
          twodimensional::getl1();
      }

      void square_area()
      {
          area=(twodimensional::l1)*(twodimensional::l1);
          cout<<"Square's area : "<<area<<endl;
      }

      void square_perimeter()
      {
          perimeter=4*(twodimensional::l1);
          cout<<"Square's perimeter : "<<perimeter<<endl;
      }
};

class  circle : public twodimensional{

 public:
      circle()
      {
          cout<<"I am a circle shape"<<endl;
      }

      void getlen()
      {
          twodimensional::getr();
      }

      void circle_area()
      {
          area=pi*(twodimensional::r)*(twodimensional::r);
          cout<<"Circle's area : "<<area<<endl;
      }

      void circle_perimeter()
      {
          perimeter=2*pi*(twodimensional::r);
          cout<<"Circle's perimeter : "<<perimeter<<endl;
      }
};

class  hexagone: public twodimensional{

 public:
      hexagone()
      {
          cout<<"I am a hexagone shape"<<endl;
      }

      void getlen()
      {
          twodimensional::getl1();
      }
      void hexa_area()
      {
          area=(twodimensional::l1);
          area*=(3*sqrt(3))/2;
          cout<<"Hexagones's area : "<<area<<endl;
      }
      void hexa_perimeter()
      {
          perimeter=6*(twodimensional::l1);
          cout<<"Hexagones's perimeter : "<<perimeter<<endl;
      }
};


class  rectangle: public twodimensional{

 public:
      rectangle()
      {
          cout<<"I am a rectangle shape"<<endl;
      }

      void getlen()
      {
          twodimensional::getl1();
          twodimensional::getl2();
      }

      void rec_area()
      {
          area=(twodimensional::l1)*(twodimensional::l2);

          cout<<"Rectangles's area : "<<area<<endl;
      }
      void rec_perimeter()
      {
          perimeter=2*((twodimensional::l1)+(twodimensional::l2));
          cout<<"Rectangles's perimeter : "<<perimeter<<endl;
      }
};

class sphere :public threedimensional{
  public:
      sphere()
      {
          cout<<"I am a sphere shape"<<endl;
      }

      void getlen()
      {
          threedimensional::getr();
      }
      void sp_area()
      {
          sur_area=4*pi*(threedimensional::r)*(threedimensional::r);
          cout<<"Sphere's surface area : "<<sur_area<<endl;
      }
      void sp_vol()
      {
          volume=4*pi*(threedimensional::r)*(threedimensional::r)*(threedimensional::r);
          volume/=3;
          cout<<"Sphere's volume : "<<volume<<endl;
      }

};

class cylinder :public threedimensional{
  public:
      cylinder()
      {
          cout<<"I am a cylinder shape"<<endl;
      }

      void getlen()
      {
          threedimensional::getr();
          threedimensional::getl1();
      }
      void cy_area()
      {
          sur_area=pi*(threedimensional::r)*(threedimensional::r)*(threedimensional::l1);
          cout<<"Cylinder's surface area : "<<sur_area<<endl;
      }
      void cy_vol()
      {
          volume=2*pi*(threedimensional::r)*(threedimensional::r + threedimensional::l1);
          cout<<"Cylinder's volume : "<<volume<<endl;
      }

};


class cone :public threedimensional{
  public:
      cone()
      {
          cout<<"I am a cone shape"<<endl;
      }

      void getlen()
      {
          threedimensional::getr();
          threedimensional::getl1();
      }
      void co_area()
      {
          sur_area=pi*(threedimensional::r)*(threedimensional::r+sqrt((threedimensional::l1)*(threedimensional::l2)+(threedimensional::r)*(threedimensional::r)));
          cout<<"Cone's surface area : "<<sur_area<<endl;
      }
      void co_vol()
      {
          volume=pi*(threedimensional::r)*(threedimensional::r)*(threedimensional::l1);
          volume/=3;
          cout<<"Cone's volume : "<<volume<<endl;
      }

};

class cube :public threedimensional{
  public:
      cube()
      {
          cout<<"I am a cube shape"<<endl;
      }

      void getlen()
      {
          threedimensional::getl1();
      }
      void cu_area()
      {
          sur_area=6*(threedimensional::l1)*(threedimensional::l1);
          cout<<"Cube's surface area : "<<sur_area<<endl;
      }
      void cu_vol()
      {
          volume=threedimensional::l1;
          volume*=volume;
          volume*=volume;
          cout<<"Cube's volume : "<<volume<<endl;
      }

};

int main()
{
    int t,c=1;

    while(1)
    {
        cout<<"SELECT"<<endl;
        cout<<" 1. 2D "<<endl;
        cout<<" 2. 3D "<<endl;
        cout<<" 3. EXIT"<<endl;
        cout<<"ENTER CHOICE :";
        cin>>c;

        if(c==1)
        {
            int c1;
            cout<<endl;
            cout<<" 1. square "<<endl;
            cout<<" 2. cicle "<<endl;
            cout<<" 3. rectangle"<<endl;
            cout<<" 4. hexagonal"<<endl;
            cout<<"ENTER OPT :";
            cin>>c1;

            if(c1==1)
            {
                square s;
                s.getlen();
                s.square_area();
                s.square_perimeter();
            }
            else if(c1==2)
            {
                circle cr;
                cr.getlen();
                cr.circle_area();
                cr.circle_perimeter();
            }
            else if(c1==3)
            {
                rectangle rc;
                rc.getlen();
                rc.rec_area();
                rc.rec_perimeter();
            }
            else if(c1==4)
            {
                hexagone h1;
                h1.getlen();
                h1.hexa_area();
                h1.hexa_perimeter();
            }
            else
                exit(1);

            cout<<endl;
        }
        else if(c==2)
        {
            int c1;
            cout<<endl;
            cout<<" 1. Cube "<<endl;
            cout<<" 2. Cylinder "<<endl;
            cout<<" 3. Sphere"<<endl;
            cout<<" 4. Cone"<<endl;
            cout<<"ENTER OPT :";
            cin>>c1;

            if(c1==1)
            {
                cube cu;
                cu.getlen();
                cu.cu_area();
                cu.cu_vol();
            }
            else if(c1==2)
            {
                cylinder cy;
                cy.getlen();
                cy.cy_area();
                cy.cy_vol();
            }
            else if(c1==3)
            {
                sphere sp;
                sp.getlen();
                sp.sp_area();
                sp.sp_vol();
            }
            else if(c1==4)
            {
                cone co;
                co.getlen();
                co.co_area();
                co.co_vol();
            }
            else
                exit(1);

            cout<<endl;
        }
        else
            break;
    }

}

