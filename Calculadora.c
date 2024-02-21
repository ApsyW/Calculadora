#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    printf("Ingrese el primer número: ");
    scanf("%lf", &num1);
    printf("Ingrese el operador (+, -, *, /): ");
    scanf(" %c", &operador);
    printf("Ingrese el segundo número: ");
    scanf("%lf", &num2);

     if (operador == '+') {
        resultado = num1 + num2;
    } else if (operador == '-') {
        resultado = num1 - num2;
    }else if (operador == '*') {
        resultado = num1 * num2;
    } else if (operador == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
        } else {
            printf("Error: No se puede dividir por cero.\n");
            return 1;
        }

    return 0;
}

