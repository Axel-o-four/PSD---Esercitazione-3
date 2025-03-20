links: utils.o vettore.o main.o
  gcc utils.o vettore.o main.o -o Vettore.exe

utils.o:
  gcc -c utils.c

vettore.o:
  gcc -c vettore.c

main.o:
  gcc -c main.c

clean:
  rm -f utils.o vettore.o main.o Vettore.exe
