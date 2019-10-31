# Trabalho_1_ED1
Repositório para o versionamento do trabalho 1 da disciplina de Estrutura de Dados 1 (FGA)

___
## Informações sobre os alunos

| Nome | Matrícula |
| --- | --- | 
| Hugo Sobral de Lima Salomão | 18/0018604 |
| Leonardo Da Silva Gomes     | 18/0021974 |

___
## Informações acerca da compilação do projeto

Para este projeto, foi pensado na automação dos comandos de compilação através de um makefile.  
O makefile, então, serviu para que o código seja executado de maneiras distintas de acordo com a necessidade em questão.

### Para compilar todos os códigos fontes, execute:
```
make
```
Com este comando é gerado um arquivo "**.o**", na pasta **obj/**, para cada arquivo "**.c**", localizados na pasta **src/**.

### Para criar um executável com a fila de vetor
```
make vetor
```
Com este comando é gerado; a partir dos arquivos "**.o**" dos módulos *main* e *FilaVetor*; um executável  chamado de "**prog**", localizado na pasta **bin/**.

### Para criar um executável com a fila circular
```
make circular
```
Com este comando é gerado; a partir dos arquivos "**.o**" dos módulos *main* e *FilaCircular*; um executável  chamado de "**prog**", localizado na pasta **bin/**.

### Para criar um executável com a fila circular de lista encadeada
```
make lista
```
Com este comando é gerado; a partir dos arquivos "**.o**" dos módulos *main* e *FilaLista*; um executável  chamado de "**prog**", localizado na pasta **bin/**.

### Para executar o código
```
make run
```
Este comando fica responsável por executar o arquivo **prog**.

<<<<<<< HEAD
### Para limpar os executáveis
```
make clean
```
Com este comando todos os arquivos "**.o**" e o arquivo **prog** serão removidos.

=======
>>>>>>> 254965cc9fcf769a9cff3b39e783588f002ca91a
___
## Para nível de acompanhamento do progresso do trabalho
Segue o [link do github](https://github.com/KiSobral/Trabalho_1_ED1)

> O repositório só vira a se tornar público assim que o prazo de entrega desta tarefa seja encerrado.