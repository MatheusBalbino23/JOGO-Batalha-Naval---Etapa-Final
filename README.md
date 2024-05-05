# Batalha Naval em C

Este é um jogo simples de Batalha Naval implementado em C. O jogo simula uma batalha naval onde o jogador, como almirante, deve afundar as embarcações inimigas no menor número de tentativas possível.

## Como Jogar

1. **Compile o código-fonte:** Use um compilador C, como o GCC, para compilar o código-fonte:
   
   ```bash
   gcc batalha_naval.c -o batalha_naval
   ```

2. **Execute o jogo:** Após compilar, execute o jogo:

   ```bash
   ./batalha_naval
   ```

3. **Regras do Jogo:**
   - Você, como almirante, tem 20 vidas para completar a missão.
   - O tabuleiro é uma matriz de 14x14 células.
   - Você deve atirar nas coordenadas (linha, coluna) para tentar acertar as embarcações inimigas.
   - As embarcações incluem: submarino (S), hidroavião (H), porta-aviões (P) e destróier (D).
   - Cada tipo de embarcação possui um número diferente de células no tabuleiro.
   - O jogo mostra uma mensagem informando se o tiro acertou uma embarcação ou não.
   - O jogo termina quando você acaba com suas vidas.

## Exemplo de Uso

```
$ ./batalha_naval
```

```
      ____________________________________________________________________
     |                                                                    |
     |  ****************************************************************  |
     |  ***************** BEM-VINDO AO BATALHA NAVAL *******************  |
     |  ****************************************************************  |
     |____________________________________________________________________|


Voce eh um almirante que tem a missao de derrubar as embarcacoes inimigas
e dar vantagem para o seu pais na guerra. Voce tera 20 vidas para completar sua missao. Eai, voce consegue?

Qual seu nome?
Almirante John Doe

   1    2    3    4    5    6    7    8    9    10    11    12    13    14
1 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
2 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
3 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
4 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
5 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
6 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
7 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
8 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
9 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
10 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
11 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
12 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
13 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
14 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0
```

```
FIM DO JOGO
Jogador: Almirante John Doe
Placar: 1
```

## Contribuição
Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue ou enviar um pull request.

##Licença
Este projeto está licenciado sob a MIT License.

