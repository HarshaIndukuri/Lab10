#include <iostream>


using namespace std;


// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{
public:
  // default class constructor (with no arguments):
  Point(); 

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively  
  void Set_X(int xval);
  void Set_Y(int yval);

void print () ;



// private data members x, y represent coordinates of the point:
private:
  int X;
  int Y;
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
} 
    

void Point :: print()  {

cout<<"("<<X<<", "<<Y<<")";

}








//  Declaration of class Rectangle

class Rectangle
{
private:
Point v1, v2, v3, v4;






public:


Rectangle (Point, Point);

Rectangle ();

int area () {

int a = side1();

int b = side2();

return (a*b);

}



private:

int side1() {

return (v2.Get_X()-v1.Get_X());

}

int side2() {

return (v4.Get_Y()-v1.Get_Y());

}


};


Rectangle :: Rectangle (Point a1, Point a3) {
v1=a1;
v3=a3;

v1.print();


v2.Set_X(v3.Get_X());
v2.Set_Y(v1.Get_Y());
v2.print();

v3.print();

v4.Set_X(v1.Get_X());
v4.Set_Y(v3.Get_Y());
v4.print();

}




Rectangle :: Rectangle () {

v1.Set_X(0);
v1.Set_Y(0);
v1.print();


v2.Set_X(1);
v2.Set_Y(0);
v2.print();

v3.Set_X(1);
v3.Set_Y(1);
v3.print();

v4.Set_X(0);
v4.Set_Y(1);
v4.print();

}









//  main() function for testing classes Point and Rectangle
int main()
{

// Testing classes Point and Rectangle

Point b1(1,2);
Point b3(3,4);

cout<<"The default rectangle has vertices ";
Rectangle r1;
cout<<" Its area is "<<r1.area()<<" .";
cout<<endl;


cout<<"The rectangle has vertices ";
Rectangle r2(b1,b3);
cout<<" Its area is "<<r2.area()<<" .";
cout<<endl;






// Declaring a point using default class constructor (x = y = 0):
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:

p1.print();
cout<<endl;

p2.print();
cout<<endl;



//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  

  return 0;
}

















































	
