#include<iostream>

//Declaracion de variables que se usaran y funciones
int ord=0, des=0, orden=0, combo=0, total=0;
int subtotal(int, int);
void descuento (void);
void variedad_combo (void);

//usar el espacio de nombre std para agilizar la escritura del codigo
using namespace std;

//inicio del programa
int main()
{
	//declarar variables locales
	int numAlim=0;
	int costo=0;
	
	//dar la bienevenida
	cout<<"*****************************"<<endl;
	cout<<"* Bienvenido al restaurante *"<<endl;
	cout<<"*    Deseas ordenar algo?   *"<<endl;
	cout<<"*           1) Si           *"<<endl;
	cout<<"*           2) No           *"<<endl;
	cout<<"*****************************"<<endl;
	cout<<"-----------------------------"<<endl;
	cin>>ord;
	cout<<"-----------------------------"<<endl;
	
	//Dar inicio la estructura if para procesar la respuesta anterior
	if(ord==1)
	{
		//iniciar la estructura while para hacer que se repita lo que esta dentro de el hasta que usuario lo indique
		while(ord == 1)
		{
			//Preguntar al usuario que paquete decesa ordenar y asi llevar a cabo la respuesta
			system("cls");***************************************"<<endl;
			cout<<"*         Que paquete decea ordenar?           *"<<endl;
			cout<<"*  1) Paquete A: Hamburguesa, papas, refresco  *"<<endl;
			cout<<"*  2) Paquete B: Hamburguesa, ensalada, agua   *"<<endl;
			cout<<"*         3) Paquete C: Papas, malteada        *"<<endl;
			cout<<"************************************************"<<endl;
			cout<<"------------------------------------------------"<<endl;
			cin>>orden;
			cout<<"------------------------------------------------"<<endl;
			
			//iniciar if para mostrarle al usuario lo que pidio en base a su respuesta y mostrar los diferentes combos que hay
			if(orden==1)
			{
				//Hacerle saber que paquete eligió 
				cout<<"*********************************************"<<endl;
				cout<<"*         Haz elegido el paquete A          *"<<endl;
				//Mandar a llamar la funcion variedad de combo de tipo vacio
				variedad_combo();
				//iniciar un switch case para procesar la respuesta y mostrar el combo elegido junto al precio de cada produto
				switch (combo)
				{
					//Se mostrara al usuario lo siguiente en caso de haber elegido el primer combo
					case 1:
						cout<<"***************************************************"<<endl;
						cout<<"*             Hamburguesa grande: $60             * \n*               Papas grandes: $30                * \n*                  Refresco: $20                  *"<<endl;
						cout<<"*              Precio del combo: $110             *"<<endl;
						cout<<"* Cuantos combos de este paquete quieres ordenar? *"<<endl;
						cout<<"***************************************************"<<endl;
						cout<<"---------------------------------------------------"<<endl;
						cin>>numAlim;
						cout<<"---------------------------------------------------"<<endl;
						//Se declara el valor del combo para llevar a cabo el total mas adelante
						costo=110;
						break;
					//Se mostrara al usuario lo siguiente en caso de haber elegido el segundo combo	
					case 2:
						cout<<"***************************************************"<<endl;
						cout<<"*             Hamburguesa mediana: $50            * \n*               Papas mediana: $20                * \n*                  Refreso: $15                   *"<<endl;
						cout<<"*              Precio del combo: $85              *"<<endl;
						cout<<"* Cuantos combos de este paquete quieres ordenar? *"<<endl;
						cout<<"***************************************************"<<endl;
						cout<<"---------------------------------------------------"<<endl;
						//Se declara el valor del combo para llevar a cabo el total mas adelante
						cin>>numAlim;
						cout<<"---------------------------------------------------"<<endl;
						costo=85;
						break;
					//Se mostrara al usuario lo siguiente en caso de haber elegido el tercer combo
					case 3:
						cout<<"***************************************************"<<endl;
						cout<<"*              Hamburguesa chica: $40             * \n*                Papas chicas: $10                * \n*                  Refresco: $10                  *"<<endl;
						cout<<"*              Precio del combo: $60              *"<<endl;
						cout<<"* Cuantos combos de este paquete quieres ordenar? *"<<endl;
						cout<<"***************************************************"<<endl;
						cout<<"---------------------------------------------------"<<endl;
						//Se declara el valor del combo para llevar a cabo el total mas adelante
						cin>>numAlim;
						cout<<"---------------------------------------------------"<<endl;
						costo=60;
						break;
					//Se mostrara al usuario lo siguiente en caso de haber elegido un combo que no esta incluido
					default:
						cout<<"******************************"<<endl;
						cout<<"* Ese combo no esta incluido *"<<endl;
						cout<<"******************************"<<endl;
						break;		
				}
			}
				//Se mostrara al usuario lo siguiente en caso de haber elegido el segundo combo
				else if(orden==2)
				{
					cout<<"*********************************************"<<endl;
					cout<<"*         Haz elegido el paquete B          *"<<endl;
					//Mandar a llamar la funcion variedad de combo de tipo vacio
					variedad_combo();
					//iniciar un switch case para procesar la respuesta y mostrar el combo elegido junto al precio de cada produto
					switch(combo)
					{
						case 1: 
							cout<<"***************************************************"<<endl;
							cout<<"*             Hamburguesa grande: $60             * \n*               Ensalada grande: $30              * \n*                 Agua grande: $15                *"<<endl;
							cout<<"*              Precio del combo: $105             *"<<endl;
							cout<<"* Cuantos combos de este paquete quieres ordenar? *"<<endl;
							cout<<"***************************************************"<<endl;
							cout<<"---------------------------------------------------"<<endl; 
							cin>>numAlim;
							cout<<"---------------------------------------------------"<<endl;
							costo=105;
							break;
						case 2: 
							cout<<"***************************************************"<<endl;
							cout<<"*             Hamburguesa mediana: $50            * \n*               Ensalada mediana: $20             * \n*                 Agua mediana: $10               *"<<endl;
							cout<<"*              Precio del combo: $80              *"<<endl;
							cout<<"* Cuantos combos de este paquete quieres ordenar? *"<<endl;
							cout<<"***************************************************"<<endl;
							cout<<"---------------------------------------------------"<<endl; 
							cin>>numAlim;
							cout<<"---------------------------------------------------"<<endl;
							costo=80;
							break; 
						case 3: 
							cout<<"***************************************************"<<endl;
							cout<<"*              Hamburguesa chica: $40             * \n*               Ensalada chica: $10               * \n*                 Agua chica: $5                  *"<<endl;
							cout<<"*              Precio del combo: $55              *"<<endl;
							cout<<"* Cuantos combos de este paquete quieres ordenar? *"<<endl;
							cout<<"***************************************************"<<endl;
							cout<<"---------------------------------------------------"<<endl;
							cin>>numAlim;
							cout<<"---------------------------------------------------"<<endl;
							costo=55;
							break;
						default:
							cout<<"******************************"<<endl;
							cout<<"* Ese combo no esta incluido *"<<endl;
							cout<<"******************************"<<endl;
							break;			
					}
				}
				
					else if(orden==3)
					{
						cout<<"*********************************************"<<endl;
						cout<<"*         Haz elegido el paquete C          *"<<endl;
						variedad_combo();
						
						switch (combo)
						{
							case 1: 
								cout<<"***************************************************"<<endl;
								cout<<"*               Papas grandes: $30                * \n*              Malteada grande: $40               *"<<endl;
								cout<<"*              Precio del combo: $70              *"<<endl;
								cout<<"* Cuantos combos de este paquete quieres ordenar? *"<<endl;
								cout<<"***************************************************"<<endl;
								cout<<"---------------------------------------------------"<<endl;
								cin>>numAlim;
								cout<<"---------------------------------------------------"<<endl;
								costo=70;
								break;
							case 2: 
								cout<<"***************************************************"<<endl;
								cout<<"*               Papas medianas: $20               * \n*              Malteada mediana: $30              *"<<endl;
								cout<<"*              Precio del combo: $50              *"<<endl;
								cout<<"* Cuantos combos de este paquete quieres ordenar? *"<<endl;
								cout<<"***************************************************"<<endl;
								cout<<"---------------------------------------------------"<<endl;
								cin>>numAlim;
								cout<<"---------------------------------------------------"<<endl;
								costo=50;
								break;
							case 3: 
								cout<<"***************************************************"<<endl;
								cout<<"*                Papas chicas: $10                * \n*                Malteada chica: $15              *"<<endl;
								cout<<"*              Precio del combo: $25              *"<<endl;
								cout<<"* Cuantos combos de este paquete quieres ordenar? *"<<endl;
								cout<<"***************************************************"<<endl;
								cout<<"---------------------------------------------------"<<endl;
								cin>>numAlim;
								cout<<"---------------------------------------------------"<<endl;
								costo=25;
								break;
							default: 
								cout<<"******************************"<<endl;
								cout<<"* Ese combo no esta incluido *"<<endl;
								cout<<"******************************"<<endl;
								break;		
						}
					}
						//Se mostrara lo siguiente en caso de haber elegido un paquete no incluido
						else
						{
							cout<<"*************************"<<endl;
							cout<<"*                       *"<<endl;
							cout<<"*  Paquete no incluido  *"<<endl;
							cout<<"*                       *"<<endl;
							cout<<"*************************"<<endl;
						}
		//se manda a llamar la funcion subtotal para llevar a cabo las operaciones y el resultado se guarda en la variable total
		total=subtotal(costo,numAlim);
		//Se manda a llamar la funcion descuento, este solo se hara si la compra es mayor a 2 pesos, esta funcion es de tipo vacio        
		descuento();
		
		//Se te preguntara si quieres ordenar algo mas
		cout<<"*****************************"<<endl;
		cout<<"*                           *"<<endl;
		cout<<"* Quieres ordenar algo mas? *"<<endl;
		cout<<"*           1) Si           *"<<endl;
		cout<<"*           2) No           *"<<endl;
		cout<<"*                           *"<<endl;
		cout<<"*****************************"<<endl;
		cout<<"-----------------------------"<<endl;
		cin>>ord;
		cout<<"-----------------------------"<<endl;
		
		//se inicia un if-else para procesar dicha respuesta y llevar a cabo lo siguiente
		if (des==1)
		{
			//en caso de que des sea igual a 1 se te mostrara la siguiente 
			system("cls");
			cout<<"**************************"<<endl;
			cout<<"*                        *"<<endl;
			cout<<"*     Menu principal     *"<<endl;
			cout<<"*                        *"<<endl;
			cout<<"**************************"<<endl;
			system("pause");
		}	
		else
		{	
			//en caso de que des sea igual a 12 se te mostrara la siguiente y se le dara el valor 2 a "des" para dar fin al while 
			system("pause");
			cout<<"****************************************"<<endl;
			cout<<"*                                      *"<<endl;
			cout<<"*  Gracias por visitar el restaurante  *"<<endl;
			cout<<"*                                      *"<<endl;
			cout<<"****************************************"<<endl;
			des==2;
		}
		
		}
	}
		//Se inicia un if else para procesar la pregunta de la linea 22
		else if(ord==2)
		{
			//En caso de haber puesto 2=No se te dara las gracias por la visita
			cout<<"****************************************"<<endl;
			cout<<"*                                      *"<<endl;
			cout<<"*  Gracias por visitar el restaurante  *"<<endl;
			cout<<"*                                      *"<<endl;
			cout<<"****************************************"<<endl;
		}
			else
			{
				//En caso de haber puesto un numero diferente de 1 o 2 se te mostrara lo siguiente
				cout<<"**********************"<<endl;
				cout<<"*                    *"<<endl;
				cout<<"*  Opcion no valida  *"<<endl;
				cout<<"*                    *"<<endl;
				cout<<"**********************"<<endl;
			}
	
	return 0;
}

//Se inicia la funcion de tipo vacio variedad del combo
void variedad_combo (void)
{
	//Se mostrara esto en caso de mandar a llamar la funcion
	cout<<"*       Cual variedad deseas ordenar?       *"<<endl;
	cout<<"* Quieres el combo grande, mediano o chico? *"<<endl;
	cout<<"*              1) Combo grande              *"<<endl;
	cout<<"*              2) Combo mediano             *"<<endl;
	cout<<"*              3) Combo chico               *"<<endl;
	cout<<"*********************************************"<<endl;
	cout<<"---------------------------------------------"<<endl;
	//Se guardara la respuesta de la pregunta anterior 
	cin>>combo;
	cout<<"---------------------------------------------"<<endl;
}

//Se inicia la funcion subtotal
int subtotal(int precio, int alimentos)
{
	//se declara la variable subtotal
	int subtotal=0;
	//Se hace la operacion del subtotal
	subtotal=precio*alimentos;
	cout<<"*********************************************"<<endl;
	cout<<"*                                           *"<<endl;
	cout<<"*  El total de su compra es igual a: $"<<subtotal<<"  *"<<endl;
	cout<<"*                                           *"<<endl;
	cout<<"*********************************************"<<endl;
	cout<<""<<endl;
	//Damos el regreso del valo subtotal
	return subtotal;
}

//iniciamos la funcion descuento de tipo vacio 
void descuento (void)
{
	//Se declaran 2 variables locales
	int precio_descuento=0, precio_total=0;
	//Se inicia un if else para dar proceso si el total es mayor a 200
	if (total >= 200)
	{
		cout<<"**************************************"<<endl;
		cout<<"*                                    *"<<endl;
		cout<<"* Se te aplicara el 10% de descuento *"<<endl;
		cout<<"*                                    *"<<endl;
		cout<<"**************************************"<<endl;
		cout<<""<<endl;
		//En caso de que total sea igual a 200 se hace la siguiente operacion
		precio_descuento=total*0.10;
		precio_total=total-precio_descuento;
		//Se muestra al usuario el total con el descuento de su compra
		cout<<"******************************************************************"<<endl;
		cout<<"*                                                                *"<<endl;
		cout<<"*  El total de tu compra ya con el descuento incluido es: $"<<precio_total<<"  *"<<endl;
		cout<<"*                                                                *"<<endl;
		cout<<"******************************************************************"<<endl;
		cout<<""<<endl;
	}
	//se hara el siguiente else en caso de que sea menos a 200 la comprar, osea que no hay un descuento
	else 
	{
		precio_total=total;
	}
}

