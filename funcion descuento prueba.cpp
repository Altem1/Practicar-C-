#include<iostream>

using namespace std;

void descuento (void);
int total=190;

int main()
{
	descuento();	
}

void descuento (void)
{
	int precio_descuento=0, precio_total=0;
	if (total >= 200)
	{
		cout<<"Se te aplicara el 10% de descuento"<<endl;
		precio_descuento=total*0.10;
		precio_total=total-precio_descuento;
		
		cout<<"El total de tu compra ya con el descuento incluido es: "<<precio_total;
	}
	else 
	{
		precio_total=total;
	}
}
