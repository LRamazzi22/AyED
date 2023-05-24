/*a. Se desea calcular el valor de π usando la serie de Liebniz, sin usar ninguna optimización.
b. Debe iterar hasta que el valor de π se correcto en sus 6 primeros decimales (3,141592)*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double pi = 0;
    double signo = 1;
    double denominador = 1;
    int cantIteraciones = 0;
    double aux = 0; //donde se guarda el valor anterior para calcular los decimales 
    double precision = 0.0000001;
    
    do {
        aux = pi; 
        pi += signo / denominador;
        signo *= -1.0;
        denominador += 2.0;
        
        cantIteraciones++;

    } while (abs(pi*4 - aux*4) > precision); 
    
    cout << "Número de iteraciones: " << cantIteraciones << endl;
    cout << "Valor aproximado de π: " << setprecision(8) << pi * 4 << endl;
    
    return 0;
}