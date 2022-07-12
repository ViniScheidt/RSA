Vitor Tomasi e  Vinicius Scheidt.

##Planejamento e operação:##

Como você organizou seu código?
Para realizar efetivamente a criptografia, a mensagem é transformada para códigos da tabela ASCII para assim poder realizar operações matemáticas. Dividindo cada letra como um bloco da mensagem, chamamos cada bloco um por um.

Que tipos de problemas você encontrou?
Encontramos dificuldade no momento de fazer a leitura dos arquivos txt, com isso decidimos fazer de uma forma em que geramos automaticamente as key’s.

Que linguagem utilizou e por quê?
Utilizamos a linguagem c + +, por conta de maior domínio na mesma.

Como você testou seu código?
Fizemos testes manuais em cada menu do programa.

Que tipos de bugs você encontrou?
Encontramos bug’s quando iria descriptografar  com a chave do expoente E pois ele estava retornando mais digitos que o necessario com isso ajustamos da seguinte forma –if (retorno == 1) return numb;--

O que funciona e o que não funciona?
O sistema faz criptografia e descriptografia,tanto como a geração automática de chaves, no entanto não lê arquivos.

Há algum problema no código que você não conseguiu resolver?
Apesar de não realizar a leitura dos arquivos, conseguimos estar fazendo o mesmo funcionar 100% como esperavamos.

#Avalie o projeto:#

O que você aprendeu?
Aprendemos bastante sobre a criptografia RSA e a sua funcionalidade, além de sua lógica.

Valeu a pena?
Sim, conhecemos novas funcionalidades na linguagem escolhida pois nunca havíamos trabalhado com este tipo de lógica de criptografia e métodos voltado ao mesmo.



--Como rodar

Para rodar basta executar --make run--

Após executar o comando acima irá abrir um menu

--Uso Tela 1
No menu tem 5 opções. Iniciando o sistema pela primeira vez é necessário gerar as chaves, para se poder realizar os demais processos, digitando 1.

--Uso Tela 2
Para criptografar uma mensagem, basta digitar 2, ele irá usar as últimas chaves geradas, imprimindo após a mensagem criptografada no formato parecido com :
2321 42342

--Uso Tela 3
Para descriptografar uma mensagem criptografada usando as chaves do sistema, basta digitar 3.
Insira a mensagem criptografada seguindo o formato parecido com: 
12321 42342 e ele irá descriptografar com a chave atual.
