#include <iostream>
#include <string>


#if !defined(__POINT__)
#define __POINT__



class Point
{
  public:
         Point();
        ~Point();
         Point(float, float);


         Point move(float dx, float dy);

         void print();
         void lis();
         float distance(const Point &)const;
         Point milieu(const Point &)const;


         float get_x() const;
         float get_y() const;
         void set_x(float x1);
         void set_y(float y1);



  private:
    float mX;
    float mY;


};


class Cercle
{
  public:
        Cercle();
       ~Cercle();
        Cercle(float r, Point p);
        Cercle(float r, float x , float y);

        float get_rayon() const;
        void  set_rayon(const float r);
        Point get_centre() const;

        float surface();
        float perimetre();

        Point move(float dx, float dy);
        bool  egalite(Cercle c);
        bool  appartenance(Point p);



  private:
         Point centre;
         float rayon;





};

#endif
