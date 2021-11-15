/*
 Estructuras Formativas
 Angel Antonio Sánchez Medina
 A01412516
 22/08/21.
*/

#ifndef FUNCIONES_H
#define FUNCIONES_H

class Funciones {
public:
    int sumaIterativa(int);
    int sumaRecursiva(int);
    int sumaDirecta(int);
};

/*
 * Algoritmo que suma de forma iterativa un número.
 * @param x Número a sumar
 * @BigO O(n)
*/

int Funciones::sumaIterativa(int x){
    int sum = 0, i;
    for(i = 1; i <= x; i++){
        sum += i;
    }
    return sum;
}

/*
 * Algoritmo que suma de forma recursiva un número.
 * @param x Número a sumar
 * @BigO O(n)
*/

int Funciones::sumaRecursiva(int x){
    if(x == 0) return 0;
    return x + sumaRecursiva(x - 1);
}

/*
 * Algoritmo que suma de forma directa un número.
 * @param x Número a sumar
 * @BigO O(1)
*/

int Funciones::sumaDirecta(int x){
    return (x * (x + 1) / 2);
}

#endif
