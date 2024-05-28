// Simulador de saída de notas de Caixa Eletronico
#include <iostream>
#include <array>
using namespace std;

//Função de separação das notas por valor
array<int,4> contaNotas(int saque) {
array<int,4> notasSeparadas;
notasSeparadas[0] = (saque/50);
notasSeparadas[1] = ((saque%50)/20);
notasSeparadas[2] = (((saque%50)%20)/10);
notasSeparadas[3] = ((((saque%50)%20)%10)/5);
return notasSeparadas;
}

//Fluxo principal do codigo
int main() {
//Declara variaveis
int saque;
array<int,4> qtdNotas;
//Le valor a ser sacado do Caixa Eletronico
cout << "Digite o valor a ser sacado: ";
cin >> saque;
//Executa função para separar quantidade de notas por seu valor
qtdNotas = contaNotas(saque);
//Simula saida de notas do Caixa Eletronico
cout << "Qtd. Notas de 50: ";
cout << qtdNotas[0];
cout << "\n";
cout << "Qtd. Notas de 20: ";
cout << qtdNotas[1];
cout << "\n";
cout << "Qtd. Notas de 10: ";
cout << qtdNotas[2];
cout << "\n";
cout << "Qtd. Notas de 5: ";
cout << qtdNotas[3];
cout << "\n";
//Final do main
return 0;
}