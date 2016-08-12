#include <iostream>
#include "Lab4.h"

using namespace std;

void imprimir(int** matrix, int size, int divisor, int reminder);
  	
int main()
{
    int opc = 0;
    cout<< "Ingrese Opcion! \n1. Division Sintetica! \n2. Triangulo Pascal" << endl;
    cin >> opc;
        
    if(opc == 1)
    {
        cout << ("Ingrese el tamano del polinomio \n");
        int size;
	cin>> size;
        int matrix[2][size];

        for(int i = 0; i < size; ++i)
        {
 	       cout<< "Ingrese su valor polinomial #" << i << endl;
               int valor = 0;
               cin >> valor;    
                
	       matrix[0][i] = valor;
        }
            
        cout<< "Ingrese el numero a dividir"<< endl;
	int divisor;
	cin >> divisor;
	
	matrix[1][0] = 0;
	matrix[2][0] = matrix[0][0];
	for(int i = 1; i < size; ++i)
	{
		matrix[2][i] = matrix[0][i - 1] + matrix[1][i - 1];
		matrix[1][i] = matrix[2][i - 1];
		if(i == size - 1)
		{
			int reminder = matrix[0][i - 1] + matrix[1][i - 1];
			
		}
	}
		for(int i = 0; i < 3; ++i)
	{
		for(int k = 0; i < 4; ++k)
		{
			cout<< matrix[i][k] << " ";	
		}
		if(i == 0) cout<< "|" << divisor;
		cout<< "|";
		cout<< endl;
	}
	
    }

	if(opc == 2)
	{
		cout<< "Ingrese el numero de filas";
		int rows;
		cin >> rows;
		Pascal* triangulo = new Pascal();
		triangulo->Imprimir(rows);
	}
   return 0;
}

void imprimir(int** matrix, int size, int divisor, int reminder)
{
	for(int i = 0; i < 3; ++i)
	{
	for(int k = 0; i < size; ++i)
	{
		cout<< matrix[i][k] << " ";	
	}
	if(i == 0) cout<< "|" << divisor;
	cout<< "|";
	cout<< endl;
	}
}
