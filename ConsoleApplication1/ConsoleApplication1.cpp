#include <iostream>//input output stream 
//cin ingreso de valores
//cout salida de valores

using namespace std;

int Factorial(int numero)
{
	int resultado = 1;

	if (numero < 0)
	{
		cout << "El numero es negativo, por lo que no se puede calcular" << endl;
	}
	else
	{
		//f(n)=1*2*3*4*5*....n
		for (int i = 1; i <= numero; i++)
		{
			resultado = resultado * i;
		}
		return resultado;
	}
}

int main()
{
	int cantidadVeces;
	int numero;
	cout << "Indique la cantidad de factoriales que desea calcular: " << endl;
	cin >> cantidadVeces;
	for (int j = 0; j < cantidadVeces; j++)
	{
		cout << "Ingrese el número: " << endl;
		cin >> numero;		
		cout << "El factorial de " << numero << " es " << Factorial(numero) << endl;
	}	
}
//EN GITHUB
//Tarea:
//Entrada: mi programa debe recibir la cantidad de numero fibonacis a generar
//Salida: La serie finabonaci
//Ejemplo
//Entrada: 10
//Salida: 1 - 1 - 2 - 3 - 5 - 8 - 13 - 21 - 34 - 55
//Entrada: 5
//Salida: 1 - 1 - 2 - 3 - 5
//Entrada: -9
//Salida: "No puedo procesar negativos"








