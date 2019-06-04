g++ -c -Wall -g Noeud.h Noeud.cpp
g++ -c -Wall -g ArbreB.h ArbreB.cpp
g++ -c -Wall -g main.c
g++ main.o Noeud.o -o main
./main
