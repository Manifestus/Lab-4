#include <iostream>
#include "Lab4.h"

using namespace std;

Pascal::Pascal()
{
}

void Pascal::Imprimir(int rows)
{
    cout << endl;
 
    for (int i = 0; i < rows; i++)
    {
        int val = 1;
        for (int j = 1; j < (rows - i); j++)
        {
            cout << "   ";
        }
        for (int k = 0; k <= i; k++)
        {
            if((val%2) == 0)
            {
                cout << "      "<< "1";
            } else 
            {
                cout<< "      "<< 0;
            }
            
            val = val * (i - k) / (k + 1);
        }
        cout << endl << endl;
    }
    cout << endl;

}
