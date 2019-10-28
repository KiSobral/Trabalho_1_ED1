# Arquivo executável do projeto
BINFOLDER := bin/

# Arquivos .h do projeto
INCFOLDER := inc/

# Arquivos .c do projeto
SRCFOLDER := src/

# Arquivos .o do projeto
OBJFOLDER := obj/

# Compilador do projeto
CC := gcc

SRCFILES := $(wildcard src/*.c)

all: $(SRCFILES:src/%.c=obj/%.o)
		$(CC) obj/*.o -o bin/prog

obj/%.o: src/%.c 
		$(CC) -c $< -o $@ -I./inc

run: bin/prog
		bin/prog

.PHONY: clean
clean:
		rm -rf obj/*
		rm -rf bin/*

# Comando para rodar a versão com a fila de vetor
.PHONY: vetor
vetor:
		$(CC) obj/FilaVetor.o obj/Main.o -o bin/prog

# Comando para rodar a versão com fila circular com redimensionamento
.PHONY: circular
circular:
		$(CC) obj/FilaCircular.o obj/Main.o -o bin/prog

# Comando para rodar a versão com fila de lista encadeada
.PHONY: lista
lista:
		$(CC) obj/FilaLista.o obj/Main.o -o bin/prog
