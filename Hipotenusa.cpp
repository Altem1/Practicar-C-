#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int c1=0,c2=0;
	int n=2;
	double resu_su_cat, hipo;
	cout<<"Hipotenuse"<<endl;
	cout<<"Para sacar la hipotenusa hay que recordar como se saca"<<endl;
	cout<<"Recuerda que la hipotenusa es igual a la raiz \ncuadrada de la suma de los cuadrados de sus catetos"<<endl;
	cout<<"La formula es H^2=C1^2+C2^2"<<endl; 
	cout<<""<<endl;
	cout<<"Cual es el valor de el cateto 1: ";
	cin>>c1;
	cout<<""<<endl;
	cout<<"Cual es el valor de tu cateto 2: ";
	cin>>c2;
	cout<<""<<endl;
	cout<<"Primero vamos a sacar el valor al cuadrado del primer cateto"<<endl;
	int resultado_c1 = pow(c1,n);
	cout<< c1 <<" elevado a la potencia "<<n<<" es igual a: "<<resultado_c1<<endl;
	cout<<""<<endl;
	cout<<"Valor al cuadrado del segundo cateto"<<endl;
	int resultado_c2 = pow(c2,n);
	cout<< c2 <<" elevado a la potencia "<<n<<" es igual a: "<<resultado_c2<<endl;
	cout<<""<<endl;
	resu_su_cat = resultado_c1+resultado_c2;
	cout<<"La suma de los cuadrados de los catetos es igual a: "<<resu_su_cat<<endl;
	cout<<""<<endl;
	cout<<"Por ultimo tenemos que sacar la hipotenusa"<<endl;
	hipo=sqrt(resu_su_cat);
	cout<<"La hipotenusa es igual a: "<<hipo<<endl;
	
	return 0;
}
