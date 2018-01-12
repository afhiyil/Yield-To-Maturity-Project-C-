#ifndef FUNCTIONS_CC
#define FUNCTIONS_CC


#include "functions.h"


using namespace std;


double f(double d, int N, double FV, double PV, double C, double r){

	return   PV - (C/r) * pow(1+r,1-d) - (FV-C/r)*(1/pow(1+r,N+d));
	}


double YTM(double d, int N, double FV, double PV, double C, double r0, double r1, double epsilon){ 

	double r2;
	

	while ( (abs(r1-r0)>epsilon)  ||  (abs(f(d,N,FV,PV,C,r1))>epsilon)  ){

		r2 = r1 - (f(d,N,FV,PV,C,r1)*(r1-r0)) / (f(d,N,FV,PV,C,r1)-f(d,N,FV,PV,C,r0));
		r0 = r1;
		r1 = r2;

			 }

	return r2;

}

#endif 
