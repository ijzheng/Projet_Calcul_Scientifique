#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <time.h>
#include <ctime>
#include <math.h>
#include "projet.hpp"

using namespace std;


Point operator+(const Point & P, const Point &Q)
{
Point R(P ) ;
return R+=Q;
}
Point operator-(const Point & P, const Point &Q)
{
Point R(P ) ;
return R-=Q;
}
Point operator *( const Point & P, double a )
{
Point R(P ) ;
return R*=a ;
}
Point operator* (double a , const Point & P)
{
Point R(P ) ;
return R*=a ;
}
Point operator/ ( const Point & P, double a )
{
Point R(P ) ;
return R/=a ;
}

ostream & operator <<(ostream & os , const Point &P)
{
os<<"("<<P.x<<","<<P.y<<")" ;
return os ;
}



vector<double> Subdiv(double a,int N)
{
    vector<double> xi = vector<double>(N+1);
    for (int i=0;i<N+1;i++){
        xi[i] = -a +i*2*a/N;
    }
    return xi;
}


void print_v(vector<double> A)    //affichage de vecteur
{
    cout<<"[";
    for( int i =0; i<A.size() ; i++){
        cout<<A[i]<<"," ;
    }
    cout<<A[A.size()-1]<<"]";
}


int numgb(int N,int M,int i,int j)
{
    return (N+1)*j+i;
}






int main(){
    vector<double> xi = Subdiv(5,20);
    print_v(xi);
     
}







