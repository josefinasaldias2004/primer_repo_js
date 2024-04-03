#include <iostream>
using namespace std;
int main ()
{
 int Numero_1 , Numero_2 , suma;

    cout<< "ingrese el primer numero" << endl;
     cin>> Numero_1;
     cout<<"ingrese numero 2" << endl;
     cin>> Numero_2;
     suma = Numero_1 + Numero_2;
     cout<< "la suma es de "<<suma<< endl;

     if (Numero_1 < Numero_2)
     {
         cout<< "el primer numero ingesado es menor que el segundo"<< endl;
     }
     else
      {


        cout << "el segundo numero ingresado es menor q el primero"<< endl;
     }
     return  0 ;
}




