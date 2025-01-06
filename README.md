# **Aula 3: Variáveis e Tipos de Dados com Uma Calculadora Básica** 🎥🧮  

---

## **Bem-vindo! 👋**  
Este repositório contém o código e os exemplos da **Aula 3** do nosso curso de C++! Aqui, aprendemos sobre:  
- **Declaração e inicialização de variáveis**  
- **Tipos de dados em C++**: `int`, `float`, `double`, `char` e `bool`  
- **Boas práticas de nomeação de variáveis**  

E, claro, colocamos tudo isso em prática criando uma calculadora que sabe somar dois números. Simples, mas poderosa! 💪  

---

## **📂 O que você encontra aqui**  
- **`calculadora.cpp`**: O código-fonte da nossa calculadora.  
- **Este README**: Para guiar você sobre como rodar o código e o que aprendemos na aula.  
- **Notas Adicionais**: Um resumo das boas práticas e conceitos apresentados.  

---

## **📜 Código Resumido**  
Se quiser dar uma espiada rápida no que fizemos, aqui está o coração da calculadora:  
```cpp
#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    double numero1, numero2, resultado;   

    cout << "Bem-vindo à calculadora Básica\n";
    cout << "Nossa calculadora só sabe fazer ADIÇÃO.\n";    

    cout << "Digite o primeiro número: ";
    cin >> numero1;    
    
    cout << "Digite o segundo número: ";
    cin >> numero2;

    resultado = numero1 + numero2;

    cout << "Resultado: "<< numero1 << " " << "+ " << numero2 << " = " << resultado;

    return 0;
}
```
## **🚀 Como rodar o projeto**  
Siga os passos abaixo para compilar e executar o programa no seu ambiente:

1. **Certifique-se de que você já instalou o ambiente de desenvolvimento:**  
   - Instale o **MinGW** para compilar o código.  
   - Configure o **Visual Studio Code** para programar em C++.  
   - Caso precise de ajuda, veja [este vídeo de configuração do ambiente](https://youtu.be/G6xZPDyIOGg?si=7YbG8BEMys9wDRpq).

2. **Clone este repositório no seu computador:**  
   Abra o terminal ou prompt de comando e execute:  
   ```bash
   git clone https://github.com/leocsbh007/CalculadoraCpp.git
   cd aula-variaveis-calculadora

3. **Compile o código-fonte usando o g++:
    No terminal, digite o seguinte comando para compilar:
    g++ calculadora.cpp -o calculadora
    Isso irá gerar um arquivo executável chamado calculadora.

4. ***Execute o programa no terminal:
    Digite  o comando abaixo para rodar o executável:
    ./calculadora
   
6. **Teste e divirta-se!
Digite dois números quando solicitado e veja a mágica acontecer! 🎉


## **💡 O que aprendemos nesta aula?**

1. **Declaração de variáveis: Criamos variáveis para armazenar nossos números e resultados.
2. **Tipos de dados: Usamos double para garantir que podemos trabalhar com números decimais.
3. **Entrada e saída de dados: O famoso cin para receber números do usuário e o cout para mostrar o resultado.
4. **Boas práticas: Demos nomes claros e intuitivos às variáveis (numero1, numero2, resultado) para facilitar o entendimento do código.


## **🔧 Próximos passos**  
Na próxima aula, vamos:  

- Introduzir **estruturas condicionais** para permitir operações diferentes (soma, subtração, etc.).  
- Melhorar nossa calculadora para lidar com erros, como divisão por zero.  

Então, fique ligado, porque o aprendizado não para por aqui! 🚀  



# **Aula 4: Operadores e Condicionais com uma Calculadora Interativa** 🎥🧮  

---

## **Bem-vindo! 👋**  
Este repositório contém o código e os exemplos da **Aula 4** do nosso curso de C++! Nesta aula, levamos a nossa calculadora a outro nível, introduzindo:  
- **Operadores matemáticos em C++**: `+`, `-`, `*`, `/`  
- **Estruturas condicionais**: `if`, `else if`, e `else`  
- **Tratamento de casos especiais**: como divisão por zero e operadores inválidos  

Agora, nossa calculadora é interativa e realiza operações variadas! 💡  

---

## **📂 O que você encontra aqui**  
- **`calculadora_interativa.cpp`**: O código-fonte da calculadora expandida.  
- **Notas de Aula**: Explicações sobre operadores, condicionais e boas práticas de programação.  
- **Este README**: Instruções para rodar o código e aprender com ele.  

---

## **📜 Código Resumido**  
Confira o núcleo do nosso programa:  
```cpp
#include <iostream>
using namespace std;

int main() {
    double numero1, numero2, resultado;
    char operador;

    cout << "Bem-vindo à Calculadora Interativa!\n";
    cout << "Digite dois números e escolha uma operação (+, -, *, /).\n";

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o operador (+, -, *, /): ";
    cin >> operador;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    if (operador == '+') {
        resultado = numero1 + numero2;
    } else if (operador == '-') {
        resultado = numero1 - numero2;
    } else if (operador == '*') {
        resultado = numero1 * numero2;
    } else if (operador == '/') {
        if (numero2 != 0) {
            resultado = numero1 / numero2;
        } else {
            cout << "Erro: divisão por zero não é permitida.\n";
            return 1;
        }
    } else {
        cout << "Erro: operador inválido.\n";
        return 1;
    }

    cout << "Resultado: " << numero1 << " " << operador << " " << numero2 << " = " << resultado << "\n";

    return 0;
}
```

## **💡 O que aprendemos nesta aula?**
1. **Uso de operadores matemáticos: Expandimos nossa calculadora para suportar soma, subtração, multiplicação e divisão.
2. **Estruturas condicionais: Aprendemos como usar if, else if, e else para verificar condições e tomar decisões no código.
3. **Tratamento de erros: Implementamos verificações para evitar divisão por zero e tratar operadores inválidos.
4. **Código interativo: Tornamos o programa mais dinâmico, recebendo entradas do usuário e exibindo resultados personalizados.

# **🔧 Próximos passos**
Na próxima aula, vamos:

- **Adicionar loops para permitir múltiplas operações sem reiniciar o programa.**
- **Introduzir funções para organizar melhor nosso código.**
- **Fique ligado! 🚀**


## **📣 Contribuições e Feedback**  
Se você tiver ideias, melhorias ou até encontrou um bug (a nossa calculadora ainda é iniciante, tá? 😅), fique à vontade para abrir uma **issue** ou enviar um **pull request**.  

E aí, curtiu? Deixe uma estrelinha ⭐ no repositório! Cada apoio nos motiva ainda mais! ❤️  

## **🎬 Acompanhe a aula completa!**  
Se quiser acompanhar a explicação do código em detalhes, assista ao vídeo da aula [aqui](https://youtu.be/1AxUryyRA3g?si=Co9xUD2szxiQic6x).  

Até a próxima, programadores! 😎