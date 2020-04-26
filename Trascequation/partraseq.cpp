#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

//Constantantes físicas:
double const hb = 1.054571818;

//Constantes del problema:
double const L = 0.25; //Unidades en Amstrongs
double const a = 100.0; //Unidades en Amstrongs
double const U = 24.0; //Energía en MeV

int const Npasos=1000;

double  eqtan (double k);
double eqtanh (double beta);

int main ()
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);

  double E=0.0; //Energía en MeV
  double dE=0.0001;
  double k=sqrt(E);
  double beta=sqrt(1-E);
 
  while (E<1)
    {
      std::cout<<E<<"\t"<<eqtan(E)<<"\t"<<eqtanh(E)<<"\n";
      E+=dE;
      k=sqrt(E);
      beta=sqrt(1-E);
    }
  return 0;
  
}

double  eqtan (double E)
{
  double eq1=0.0;
  double rE=sqrt(E);
  eq1=-(1.0/rE)*tan((a*rE)/2);
  return eq1;
}

double eqtanh (double E)
{
  double eq2=0.0;
  double u=sqrt(1-E);
  eq2=(1.0/u)*tanh((u*a)/4);
  return eq2;
}
