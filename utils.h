#ifndef UTILS_H
#define UTILS_H

int solicitarFigura();
int preguntarContinuar();
void calcularTriangulo(double base, double altura);
void calcularParalelogramo(double lado1, double lado2, double altura);
void calcularCuadrado(double lado);
void calcularRectangulo(double largo, double ancho);
void calcularRombo(double diagonal_mayor, double diagonal_menor);
void calcularTrapecio(double base_mayor, double base_menor, double altura);
void calcularCirculo(double radio);
void calcularPoligonoRegular(double numero_lados, double lado, double apotema);
void calcularCubo(double lado);
void calcularCuboide(double largo, double ancho, double alto);
void calcularCilindro(double radio, double altura);
void calcularCilindroRecto(double radio, double altura);
void calcularEsfera(double radio);
void calcularConoCircularRecto(double radio, double altura);

#endif
