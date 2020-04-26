#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

//Constantantes físicas:
double const hb = 1.0;

//Constantes del problema:
double const L = 0.5; //Unidades en Amstrongs
double const a = 1.0; //Unidades en Amstrongs
double const U = 25.0; //Energía en MeV
double const m = 1.0; //Masas del electron

double  eqtan (double k);
double eqtanh (double beta);

int main ()
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);

  double E=0.05; //Energía en MeV
  double dE=0.05;
  double eps=1.0;
  
  while (E<U)
    {
      std::cout<<E<<"\t"<<eqtan(E)<<"\t"<<eqtanh(E)<<"\n";
      E+=dE;
      eps=eqtan(E)-eqtanh(E);
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

double eqtanh (double E)
{
  double eq2 = 0.0;
  double k = sqrt(2*m*E/(hb*hb));
  double beta = sqrt((2*m*U/(hb*hb))-k*k);
  double arg = beta*L/2;
  eq2=(1.0/(U-E))*tanh(arg);
  return eq2;
}
