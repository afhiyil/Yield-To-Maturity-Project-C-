#include "functions.h"


int main(){

// Get Global Financial data

	int N;  				
	double d,FV,PV,C,r0,r1,r,epsilon;       // epsilon is the error (take for example 1e-8 )


	cout<<"Enter the value of Coupon Value (c):"<<endl;
	cin>>C;

	cout<<"Enter the value of Year Fraction until next payment (d):"<<endl;
	cin>>d;

	cout<<"Enter the total nulber of years until maturity (N):"<<endl;
	cin>>N;

	cout<<"Enter the value of PV (present value of the bond):"<<endl;
	cin>>PV;

	cout<<"Enter the value of FV (Future value of the bond):"<<endl;
	cin>>FV;

	cout<<"Enter the value of r0:"<<endl;
	cin>>r0;

	cout<<"Enter the value of r1:"<<endl;
	cin>>r1;

	cout<<"Enter the value of epsilon:"<<endl;
	cin>>epsilon;

	r = YTM(d, N, FV, PV, C, r0, r1, epsilon);

	cout<<"The value of Yield to Maturity is:" << r << endl;
  


}
