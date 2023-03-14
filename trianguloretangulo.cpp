//inicio do quarto exercicio de programacao
#include <iostream>
using namespace std;
//estruturacao da codificacao do meu triangulo retangulo
int main () {
    //declaracao de variavel
    float base, altura, area;
    //interface do usuario
    cout << "Digite a base do triangulo retangulo:";
    //comando da base do meu triangulo retangulo
    cin >> base;
    //resultado da minha base do triangulo retangulo
    cout << "Digite a altura do triangulo retangulo:";
    //comando do altura do meu triangulo retangulo
    cin >> altura;
    //resultado da altura do meu triangulo retangulo
    area = (base * altura) / 2;
    //resultado final do cálculo da area do triangulo retangulo yeeeeeeeeeey
    cout << "A area do triangulo retangulo eh: " << area << endl;
    
    return 0;
}