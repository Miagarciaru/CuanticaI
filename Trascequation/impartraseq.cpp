#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

//Constantantes físicas:
double const hb = 6.582119624e-16;

//Constantes del problema:
double const L = 5.0e-12; //Unidades en Amstrongs
double const a = 12.0e-12; //Unidades en Amstrongs
double const U = 25.0e6; //Energía en MeV
double const m = 9.1e-13; //Masas del electron

double eqtan (double k);
double eqcoth (double beta);

int main ()
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);

  double E=0.05e6; //Energía en MeV
  double dE=0.0005e6;
  double eps=1.0;
  
  while (E<U)
    {
      std::cout<<(E*1e-6)<<"\t"<<eqtan(E)<<"\t"<<eqcoth(E)<<"\n";
      E+=dE;
      eps=eqtan(E)-eqcoth(E);
    }
  
  return 0;
  
}

double  eqtan (double E)
{
  double eq1=0.0;
  double k=sqrt(2*m*E/(hb*hb));
  double arg=(k/2.0)*(L-a);
  eq1=(1.0/E)*tan(arg);
  return eq1;
}

double eqcoth (double E)
{
  double eq2 = 0.0;
  double k = sqrt(2*m*E/(hb*hb));
  double beta = sqrt((2*m*U/(hb*hb))-k*k);
  double arg = beta*L/2;
  eq2=(1.0/(U-E))*(1/tanh(arg));
  return eq2;
}
