#include <stdio.h>
#include <math.h>
#include "utils.h"

/**
 * Calcula el área de un triángulo.
 * Fórmula: área = 0.5 * base * altura
 */
void calcularTriangulo(double base, double altura) {
    double area = 0.5 * base * altura;
    printf("El área del triángulo es: %.2f\n", area);
}

/**
 * Calcula el área de un paralelogramo.
 * Fórmula: área = base (lado1) * altura
 */
void calcularParalelogramo(double lado1, double lado2, double altura) {
    double area = lado1 * altura;
    double perimetro = 2 * (lado1 + lado2);
    printf("El área del paralelogramo es: %.2f\n", area);
    printf("El perímetro del paralelogramo es: %.2f\n", perimetro);
}

/**
 * Calcula el área y perímetro de un cuadrado.
 * Fórmula área = lado^2; perímetro = 4 * lado
 */
void calcularCuadrado(double lado) {
    double area = lado * lado;
    double perimetro = 4 * lado;
    printf("El área del cuadrado es: %.2f\n", area);
    printf("El perímetro del cuadrado es: %.2f\n", perimetro);
}

/**
 * Calcula el área y el perímetro de un rectángulo.
 * Fórmula área = largo * ancho; perímetro = 2 * (largo + ancho)
 */
void calcularRectangulo(double largo, double ancho) {
    double area = largo * ancho;
    double perimetro = 2 * (largo + ancho);
    printf("El área del rectángulo es: %.2f\n", area);
    printf("El perímetro del rectángulo es: %.2f\n", perimetro);
}

/**
 * Calcula el área de un rombo.
 * Fórmula: área = (diagonal_mayor * diagonal_menor) / 2
 */
void calcularRombo(double diagonal_mayor, double diagonal_menor) {
    double area = (diagonal_mayor * diagonal_menor) / 2;
    printf("El área del rombo es: %.2f\n", area);
}

/**
 * Calcula el área de un trapecio.
 * Fórmula: área = (base_mayor + base_menor) * altura / 2
 */
void calcularTrapecio(double base_mayor, double base_menor, double altura) {
    double area = (base_mayor + base_menor) * altura / 2;
    printf("El área del trapecio es: %.2f\n", area);
}

/**
 * Calcula el área y el perímetro de un círculo.
 * Fórmula: área = π * radio^2; perímetro = 2 * π * radio
 * Usamos 3.14159 como aproximación de π.
 */
void calcularCirculo(double radio) {
    const double PI = 3.14159;
    double area = PI * radio * radio;
    double perimetro = 2 * PI * radio;
    printf("El área del círculo es: %.2f\n", area);
    printf("El perímetro del círculo es: %.2f\n", perimetro);
}

/**
 * Calcula el área y perímetro de un polígono regular.
 * Fórmula área = (perímetro * apotema) / 2
 * Perímetro = número de lados * longitud de un lado
 */
void calcularPoligonoRegular(double numero_lados, double lado, double apotema) {
    double perimetro = numero_lados * lado;
    double area = (perimetro * apotema) / 2;
    printf("El área del polígono regular es: %.2f\n", area);
    printf("El perímetro del polígono regular es: %.2f\n", perimetro);
}

/**
 * Calcula el área de superficie y el volumen de un cubo.
 * Fórmula superficie = 6 * lado^2; volumen = lado^3
 */
void calcularCubo(double lado) {
    double superficie = 6 * lado * lado;
    double volumen = lado * lado * lado;
    printf("El área de superficie del cubo es: %.2f\n", superficie);
    printf("El volumen del cubo es: %.2f\n", volumen);
}

/**
 * Calcula el área de superficie y el volumen de un cuboide.
 * Fórmula superficie = 2 * (largo * ancho + largo * alto + ancho * alto);
 * volumen = largo * ancho * alto
 */
void calcularCuboide(double largo, double ancho, double alto) {
    double superficie = 2 * (largo * ancho + largo * alto + ancho * alto);
    double volumen = largo * ancho * alto;
    printf("El área de superficie del cuboide es: %.2f\n", superficie);
    printf("El volumen del cuboide es: %.2f\n", volumen);
}

/**
 * Calcula el área de superficie y el volumen de un cilindro.
 * Fórmula superficie = 2 * π * radio * (radio + altura);
 * volumen = π * radio^2 * altura
 */
void calcularCilindro(double radio, double altura) {
    const double PI = 3.14159;
    double superficie = 2 * PI * radio * (radio + altura);
    double volumen = PI * radio * radio * altura;
    printf("El área de superficie del cilindro es: %.2f\n", superficie);
    printf("El volumen del cilindro es: %.2f\n", volumen);
}

/**
 * Calcula el área de superficie y el volumen de un cilindro recto.
 * Similar a calcularCilindro.
 */
void calcularCilindroRecto(double radio, double altura) {
    calcularCilindro(radio, altura);  // Llama a la función de cilindro genérico
}

/**
 * Calcula el área de superficie y el volumen de una esfera.
 * Fórmula superficie = 4 * π * radio^2; volumen = (4/3) * π * radio^3
 */
void calcularEsfera(double radio) {
    const double PI = 3.14159;
    double superficie = 4 * PI * radio * radio;
    double volumen = (4.0 / 3.0) * PI * radio * radio * radio;
    printf("El área de superficie de la esfera es: %.2f\n", superficie);
    printf("El volumen de la esfera es: %.2f\n", volumen);
}

/**
 * Calcula el área de superficie y el volumen de un cono circular recto.
 * Fórmula superficie = π * radio * (radio + generatriz);
 * volumen = (1/3) * π * radio^2 * altura
 */
void calcularConoCircularRecto(double radio, double altura) {
    const double PI = 3.14159;
    double generatriz = sqrt((radio * radio) + (altura * altura));  // Calcula la generatriz
    double superficie = PI * radio * (radio + generatriz);
    double volumen = (1.0 / 3.0) * PI * radio * radio * altura;
    printf("El área de superficie del cono es: %.2f\n", superficie);
    printf("El volumen del cono es: %.2f\n", volumen);
}