//
#include <iostream>
using namespace std;
//
int main () {
    //declaracao de variavel
    float base, altura, area;
    //interface do usuario
    cout << "Digite a base do triangulo:";
    //quero que o meu usuario me de um numero simples como exemplo
    cin >> base;
    //novamente um numero simples como exemplo
    cout << "Digite a altura do triangulo:";
    //partindo para o final da minha segunda programacao
    cin >> altura;
    //conta final da programacao
    area = (base * altura) / 2;
    //resultado yeeeey
    cout << "A area do triangulo eh: " << area << endl;
    
    return 0;
}