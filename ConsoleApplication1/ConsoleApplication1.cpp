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
void Fibonaci(int cantidadNumeros)
{
	if (cantidadNumeros > 0)
	{
		int anterior = 1;
		int actual = 1;
		int siguiente;
		if (cantidadNumeros == 1)
		{
			cout << "1" << endl;
		}
		else if (cantidadNumeros == 2)
		{
			cout << "1 - 1" << endl;
		}
		else
		{
			cout << "1 - 1";
			for (int i = 2; i < cantidadNumeros; i++)
			{
				siguiente = anterior + actual;
				anterior = actual;
				actual = siguiente;
				cout << " - " << actual;
			}
			cout << endl;
		}
	}
	else
	{
		cout << "No puedo procesar negativos" << endl;
	}
}
int main()
{
	int cantidadNumeros;
	cout << "Ingrese la cantidad de numeros a generar: ";
	cin >> cantidadNumeros;
	Fibonaci(cantidadNumeros);
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








