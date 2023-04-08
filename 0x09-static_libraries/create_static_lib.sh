#!/bin/bash

# Compiler tous les fichiers .c en fichiers .o
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Créer la bibliothèque statique
ar -rc liball.a *.o

# Indexer la bibliothèque
ranlib liball.a

# Nettoyer les fichiers d'objets
# rm *.o
