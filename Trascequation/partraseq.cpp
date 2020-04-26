#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

//Constantantes físicas:
double const hb = 1.054571818;

//Constantes del problema:
double const L = 0.5; //Unidades en Amstrongs
double const a = 1.0; //Unidades en Amstrongs
double const U = 25.0; //Energía en MeV

int const Npasos=1000;

double  eqtan (double k);
double eqtanh (double beta);

int main ()
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);

  double E=0.1; //Energía en MeV
  double dE=0.1;
  double k=sqrt(E);
  double beta=sqrt(U-E);
  double eps=0.0;
  
  do
    {
      std::cout<<E<<"\t"<<eqtan(E)<<"\t"<<eqtanh(E)<<"\n";
      E+=dE;
      k=sqrt(E);
      beta=sqrt(U-E);
      eps=eqtan(E)-eqtanh(E);
    }
  while (abs(eps)>=1e-05);
  return 0;
  
}

double  eqtan (double E)
{
  double eq1=0.0;
  double rE=sqrt(E);
  eq1=-(1.0/rE)*tan((a*rE)/2.0);
  return eq1;
}

double eqtanh (double E)
{
  double eq2=0.0;
  double m=sqrt(U-E);
  eq2=(1.0/m)*tanh((m*a)/4.0);
  return eq2;
}
