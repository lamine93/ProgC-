#include <iostream>
#include <string>
#include <math.h>
#include "point.hpp"


/*----------------------------------------------------------------*/
              /*Point members */
/*-----------------------------------------------------------------*/

Point::Point()
{
  mX=0;
  mY=0;
}

Point::Point(float x, float y)
{
  mX = x;
  mY = y;
}

Point::~Point(){ }


float Point::get_x() const
{
	return mX;
}
float  Point::get_y() const
{
	return mY;
}
void Point::set_x(float a)
{
	mX=a;
}
void Point::set_y(float a)
{
	mY=a;
}

Point Point:: move(float dx, float dy)
{
  set_x(get_x()+dx);

	set_y(get_y()+dy);

	return *this;
}

void Point::print()
{
  std::cout << "l'abscisse x=" << get_x() << std::endl;
  std::cout << "l'ordonnee y=" << get_y() << std::endl;
}

void Point::lis()
{
  std::cout << "Donnez l'abscisse x " << std::endl;
  std::cin >> mX ;
  std::cout << "Donnez l'ordonnee y " << std::endl;
  std::cin >> mY ;
}

float Point::distance(const Point &p) const
{
  float p1,x1,x2;
	x1=(get_x()-p.get_x())*(get_x()-p.get_x());
	x2=(get_y()-p.get_y())*(get_y()-p.get_y());
	p1=sqrt(x1+x2);

	return p1;
}

Point Point::milieu(const Point &p) const
{
  Point p1;
	p1.mX=(get_x()+p.get_x())/2;
	p1.mY=(get_y()+p.get_y())/2;

	return p1;
}


/*----------------------------------------------------------------*/
                /*Cercle members */
/*-----------------------------------------------------------------*/


Cercle::Cercle(){};

Cercle::~Cercle(){};

Cercle::Cercle(float r, Point p)
{
  rayon = r;
  centre = p;
}

Cercle::Cercle(float r , float x, float y)
{
   rayon = r;
   centre.set_x(x);
   centre.set_y(y);
}


float Cercle::get_rayon() const
{
  return rayon;
}

void Cercle::set_rayon(const float r)
{
  rayon = r;
}
Point Cercle::get_centre() const
{
  return centre;
}

float Cercle::surface()
{
  return 3.14*rayon*rayon;
}

float Cercle::perimetre()
{
  return 2*3.14*rayon;
}

Point Cercle::move(float dx, float dy)
{
    return centre.move(dx, dy);
}



bool  Cercle::egalite(Cercle c)
{
  if((c.get_rayon() == get_rayon()) & (c.centre.get_x() == c.centre.get_x()) &
     (c.centre.get_y() == centre.get_y()))  return true;

  return false;
}
bool  Cercle::appartenance(Point p)
{
    if(centre.distance(p) <= get_rayon())  return true;

    return false;
}
