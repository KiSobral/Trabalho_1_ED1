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