#ifndef PROJET_H
#define PROJET_H

#include <iostream>
#include <ostream>
#include <vector>
#include <list>

using namespace std;

class Point
{
private:
    
public:
    double x;
    double y;
    Point(double x0=0,double y0 =0):x(x0),y(y0){}
    Point& operator+=( const Point & P) {x+=P.x ; y+=P.y ; return *this ; }
    Point& operator-=( const Point & P) {x-=P.x ; y-=P.y ; return *this ; }
    Point& operator *= (double a ){ x*=a ; y*=a ; return *this ; }
    Point& operator/= (double a ){ x/=a ; y/=a ; return *this ; }
};
Point operator + ( const Point& , const Point &);
Point operator - ( const Point& , const Point &);
Point operator * ( const Point& ,double a ) ;
Point operator * (double a , const Point & ) ;
Point operator / ( const Point& ,double a ) ;
//bool operator == ( const P oin t& , const P oin t& ) ;
//bool operator != ( const P oin t& , const P oin t& ) ;
ostream & operator <<(ostream &, const Point &);


vector<double> Subdiv(double a,int N);
void print_v(vector<double> A);
int numgb(int N,int M, const Point &P);












#endif