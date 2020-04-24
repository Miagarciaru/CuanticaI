#include <iostream>
#include <cmath>

double const hb=1.054571818; //Unidades Js*1e-34.
double const PI=3.1415926535;
double const m=1.000; //Unidades de kg*e-31
double const a=1.000; //Amstrongs
double const b=1.050; //Amstrongs
double const c=1.100; //Amstrongs

double energy_level (int n1, int n2, int n3);
double energy_corrected (int n1, int n2, int n3);


int main ()
{
  std::cout.precision(5);
  std::cout.setf(std::ios::scientific);
  
  double E[9]={0.0};
  int conteo=0;
  double dx=0.1;
  
  for (int ii=1; ii<=2; ii++)
    {
      for (int jj=1; jj<=2; jj++)
	{
	  for (int kk=1; kk<=2; kk++)
	    {
	      E[conteo]=energy_level (ii, jj, kk);
	      conteo++;
	    }
	}
    }

  for (double x=0.0; x<=5; x+=dx)
    {
      std::cout<<x<<"\t"<<E[0]<<"\t"<<E[1]<<"\t"<<E[2]<<"\t"<<E[3]<<"\t"<<E[4]<<"\t"<<E[5]<<"\t"<<E[6]<<"\t"<<E[7]<<"\n";
    }
  return 0;
}

double energy_level (int n1, int n2, int n3)
{
  double energy=0.0;
  energy=(pow(hb*PI, 2)/(2*m))*((pow((n1/a), 2) + pow ((n2/b), 2)) + pow((n3/c), 2));
  return energy;
}

double energy_corrected (int n1, int n2, int n3)
{
  return 0;
}
