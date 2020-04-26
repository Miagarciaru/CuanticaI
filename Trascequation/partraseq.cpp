#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

//Constantantes físicas:
double const hb = 1.054571818;

//Constantes del problema:
double const L = 0.25; //Unidades en Amstrongs
double const a = 0.5; //Unidades en Amstrongs
double const m = 9.1; //Carga del electrón e-31kg
double const U = 24.0; //Energía en MeV

int const Npasos=1000;

double  eqtan (double k);
double eqtanh (double beta);

int main ()
{
  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);

  double E=0.0; //Energía en MeV
  double dE=0.1;
  double k=0.0;
  double beta=sqrt((2*m*U)/(10*hb*hb))*pow(10, 4);
  
  for (int ii=0; ii<=Npasos; ii++)
    {
      std::cout<<eqtan(k)<<"\t"<<eqtanh(beta)<<"\n";
      E+=dE;
      k=sqrt(((2*m*E)*10)/hb)*pow(10, -5);
      beta=sqrt((2*m*(U-E))/(10*hb*hb))*pow(10, 4);
    }
  return 0;
  
}

double  eqtan (double k)
{
  double eq1=0.0;
  eq1=(1.0/k)*(tan((k/2.0)*(L-a)));
  return eq1;
}

double eqtanh (double beta)
{
  double eq2=0.0;
  eq2=(1.0/beta)*(tanh((beta*L)/2.0));
  return eq2;
}
