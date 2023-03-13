//meu primeiro contato com a programacao
#include <iostream>
using namespace std;
//inicio do meu primeiro codigo de programacao
int main () {
    //declaracao de variavel
    float raio, area;
    //olha o resultado do PI, fazia tempo que eu nao via hein
    const float PI = 3.14159;
    //interface do usuario
    cout << "Digite o raio do circulo: ";
    cin >> raio;
    //quero que me de um resultado ao final
    area = PI * raio * raio;
    //agora quero ver o resultado
    cout << "A area do circulo eh: " << area << endl;
    
    return 0;
}