#include <iostream>

int soma(int a, int b){
  return a + b;
}

int subtracao(int a, int b){
  return a - b;
}

int multiplicacao(int a, int b){
  return a * b;
}

// Esta função de divisão foi no Chatgpt, mas só essa ;)
float divisao(int a, int b) {
    if (b == 0) {
        std::cerr << "Erro: divisão por zero!\n";
        return 0;
    }
    return static_cast<float>(a) / b;
}
int main(){
  int num1, num2;
  std::cout << "Digite dois números INTEIROS: ";
  std::cin >> num1 >> num2;

  std::cout << "Soma: " << soma(num1, num2) << std::endl;
  std::cout << "Subtração: " << subtracao(num1, num2) << std::endl;
  std::cout << "Produto: " << multiplicacao(num1, num2) << std::endl;
  std::cout << "Divisão: " << divisao(num1, num2) << std::endl;
}
