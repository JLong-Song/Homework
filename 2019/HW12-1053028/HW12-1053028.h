#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
class Triangle;
class Quadrilateral;
class Point{
public:
	Point();                                      ///initial to (0,0) (須完成)
	Point(double, double);                        ///initial to (double, double)(須完成)
	friend istream& operator >> (istream&, Point&);///input(須完成)
	friend ostream& operator << (ostream&, Point&);///output(須完成)
	friend class Triangle;
	friend class Quadrilateral;
private:
	double x, y;
};
class Triangle{
public:
	Triangle(Point&, Point&, Point&);             ///initial by three Points(須完成)
	double area();                                ///calculate Triangle area(須完成)
private:
	Point point1, point2, point3;
};
class Quadrilateral{
public:
	Quadrilateral(Point&, Point&, Point&, Point&);///initial by four Points(須完成)
	double area();                                ///calculate Quadrilateral area(須完成)
private:
	Point point1, point2, point3, point4;
};
Point::Point(){
    x = 0;
    y = 0;
}
Point::Point(double P1, double P2){
    x = P1;
    y = P2;
}
istream& operator >> (istream& in, Point& a){
    in >> a.x;
    in.get();
    in >> a.y;
    return in;
}
ostream& operator << (ostream& out, Point& a){
    out << "(" << a.x << "," << a.y << ")";
    return out;
}
Triangle::Triangle(Point& P1, Point& P2, Point& P3){
    point1 = P1;
    point2 = P2;
    point3 = P3;
}
double Triangle::area(){
    return 0.5 * abs((point2.x * point3.y) - (point2.y * point3.x));
}
Quadrilateral::Quadrilateral(Point& P1, Point& P2, Point& P3, Point& P4){
    point1 = P1;
    point2 = P2;
    point3 = P3;
    point4 = P4;
}
double Quadrilateral::area()
{
    if(point4.x >= point3.x && point4.x <= point2.x)
    {
        if(point4.y >= point1.y && point4.y <= point2.y)
        {
            swap(point4, point2);
            swap(point4, point3);
        }
        else swap(point4, point3);
    }
    return 0.5 * abs((point2.x * point3.y + point3.x * point4.y) - (point2.y * point3.x + point3.y * point4.x));
}

/*
0 69 4  x
0 76 98 y
*/
