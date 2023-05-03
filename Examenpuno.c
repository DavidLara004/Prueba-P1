#include <stdio.h>

int main() {
    //Variables que se van a usar, n representa el numero ingresado por el usuario, i sera la variable contadora y hex es un arreglo.
    int n, hex[999], i = 0;
    printf("Ingrese un numero entero positivo:");
    scanf("%d", &n);
  while (n!=0)
     {
           hex[i] = n%16; //guarda el residuo del valor de n entre 16 al ser un arreglo.
           n = n /16; //divide el numero n por sigo mismo por 16.
           i++; //Dice que la variable de conteo va de manera positiva
     }
    
    return 0;
}
i--;
printf("El numero ingresado convertido a hexadecimal es: ");
//Inicio del segundo caso
while (i>=0) //Imprimir los numeros guardados en el arreglo.
{
//Uso del switch case pedendiendo los distintos casos del arreglo
switch(hexd[i]) 

{
case 10:
printf("A");
break;
case 11:
printf("B");
break;
case 12:
printf("C");
break;
case 13:
printf("D");
break;
case 14:
printf("E");
break;
case 15:
printf("F");
break;
default:
///Si el numero es diferente del 10 al 15 solamente pone lo que hay en el arreglo osea uno que va del 0 al 9./
printf("%i",hexd[i]); 
break;
} 
//Variable contadora va en orden descendente.
i--;
}
printf("\n");
return 0;
}