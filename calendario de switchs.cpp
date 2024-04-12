#include <iostream>
#include <string.h>
using namespace std;
// iinicializamos las  variables vamos a pedirle al usuario que ingrese un numero del uno al doce referiendose al mes
int main (){
int mes;
cout<< "ingrese el numero del mes"<<endl;
cin>> mes;

switch (mes){
 case 1:
     cout<< "" << endl;
     break;
case 2:
     cout<< "febrero" << endl;
     break;
case 3:
     cout<< "marzo" << endl;
     break;
case 4:
     cout<< "abril" << endl;
     break;
case 5:
     cout<< "mayo" << endl;
     break;
case 6:
     cout<< "junio" << endl;
     break;
case 7:
     cout<< "julio" << endl;
     break;
case 8:
     cout<< "agosto" << endl;
     break;
case 9:
     cout<< "septiembre" << endl;
     break;
case 10:
     cout<< "octubre" << endl;
     break;
case 11:
     cout<< "noviembre" << endl;
     break;
case 12:
     cout<< "diciembre" << endl;
     break;

default:
    cout<< "ingresaste algo mal :(\n";
break;
}
return 0;
}
