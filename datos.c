#include <stdio.h>
#include "utils.h"

int solicitarFigura()
{
    char mensaje[] = "Bienvenido";
    int ancho = (sizeof(mensaje) - 1) + 4;

    // Imprimir el encabezado con asteriscos
    for (int i = 0; i < ancho; i++)
    {
        printf("*");
    }
    printf("\n");
    printf("* %s *\n", mensaje);
    for (int i = 0; i < ancho; i++)
    {
        printf("*");
    }
    printf("\n");

    // Mostrar opciones del menú
    int figura;
    printf("\nCálculos de Figuras Geométricas\n");
    printf("----------- Área y Perímetro -----------\n");
    printf("1. Triángulo\n");
    printf("2. Paralelogramo\n");
    printf("3. Cuadrado\n");
    printf("4. Rectángulo\n");
    printf("5. Rombo\n");
    printf("6. Trapecio\n");
    printf("7. Círculo\n");
    printf("8. Polígono Regular\n\n");
    
    printf("-------- Superficie y Volumen --------\n");
    printf("9. Cubo\n");
    printf("10. Cuboide\n");
    printf("11. Cilindro\n");
    printf("12. Prisma Recto\n");
    printf("13. Esfera\n");
    printf("14. Cono Circular Recto\n\n");
    
    // Solicitar al usuario que seleccione una figura
    printf("Por favor, selecciona una figura geométrica (1-14): ");
    scanf("%d", &figura);

    return figura;
}

int preguntarContinuar()
{
    char respuesta;
    printf("\n¿Desea realizar el análisis de otra figura? (s/n): ");
    scanf(" %c", &respuesta);
    return (respuesta == 's' || respuesta == 'S') ? 1 : 0;
}
