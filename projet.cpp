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


//2.1.1.4
double* invnumgb(int N, int M, int s){
    double * couple=zero(2);
    couple[0]=s%(N+1);// i: le reste de la division s par (N+1)
    couple[1]=s/(N+1);// j: le quotient de la division s par (N+1)
    return couple;  
}

//2.1.2 Numérotation des noeuds intérieurs
//2.1.2.1
int numint(int N, int M, int i, int j){
    return (j-1)*(N-1)+i-1; 
}

//2.1.2.3
double* invnumint(int N, int M, int k){
    double *couple=zero(2);
    couple[0]=k%(N+1)+1; // i-1 est le reste de la division k par (N+1)
    couple[1]=k/(N+1)+1; // j-1 est le quotient de la division k par (N+1)
    return couple;
}


//2.1.2.4 Donner k et renvoyer s en utilisant la fonction numgb et invnumint
int num_int_gb(int N, int M, int k){
    int i=invnumint(N,M,k)[0];
    int j=invnumint(N,M,k)[1];
    int s=numgb(N,M,i,j);
    return s;
}

//2.1.2.5 Donner s et renvoyer k en utilisant la fonction invnumgb et numint.
int num_int_gb(int N, int M, int s){
    int i=invnumgb(N,M,s)[0];
    int j=invnumgb(N,M,s)[1];
    int k= numint(N,M,i,j);
    return k;
}



int main(){
    vector<double> xi = Subdiv(5,20);
    print_v(xi);
     
}







