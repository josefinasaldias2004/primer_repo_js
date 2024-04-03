#include <iostream>
using namespace std;
int main ()
{
 int Numero_1 , Numero_2 , suma,resta,  menu;

    cout<< "ingrese el primer numero" << endl;
     cin>> Numero_1;
     cout<<"ingrese numero 2" << endl;
     cin>> Numero_2;
     suma = Numero_1 + Numero_2;
     resta = Numero_1 - Numero_2;

 cout<< "______MENU_______"<< endl;
     cout<< "que desea hacer"<<endl;
     cout<< "1. Sumar los dos numeros"<< endl;
     cout<< "2. restar los dos numeros" <<endl;
     cout << "3. comparar de dos numeros" <<endl;
     cin>> menu;



     switch (menu)

     {

     case 1 :
{



     cout<< "la suma es de "<<suma<< endl;
      break;
}
     case 2:
         {


        cout<< "la resta es de " <<resta<<endl;

        break;
         }
     case 3:
{


     if (Numero_1 < Numero_2)
     {
         cout<< "el primer numero ingesado es menor que el segundo"<< endl;
     }
     else
      {


        cout << "el segundo numero ingresado es menor q el primero"<< endl;
     }

     break;
     return 0;
}
     }
}




