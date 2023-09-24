#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n=2, base;
	cout<<"Ingrese la base: "<<endl;
	cin>>base;
	int resultado=pow(base,n);
	cout<<base<<" elevado a la "<<n<<" es igual a "<<resultado<<endl;
	return 0;
}
