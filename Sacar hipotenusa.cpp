#include<iostream>
#include<cmath>
#include<math.h>

float cat1=0.0, cat2=0.0, cat1_cua=0.0;
int expo=2;

using namespace std;

int main()
{
	cout<<"* hipotenuse *"<<endl;
	cout<<" Recuerda que para sacar la hipotenusa de un \nrectangulo tienes que hacer la raiz cuadrada \nde la suma de sus catetos al cuadrado "<<endl;
	
	cout<<" La formula usada es: C1^2+C2^2=H^2 "<<endl;
	
	cout<<" Dame la medida del cateto 1 "<<endl;
	cin>>cat1;
	cout<<" Dame la medida del cateto 2 "<<endl;
	cin>>cat2;
	
	cout<<" Hagamos la suma de las 2 cantidades ya hechas al cubo "
	
	cat1_cua = pow(cat1,expo);
	cout<<cat1<<"elevado a"<<exp<<"="<<cat1_cua<<endl;
	
	cout<<cat1<<"+"<<cat2<<"="<<sum_cub<<endl;
	
	
	
	return 0;
}
