Main: Main.o Soldado.o Arqueros.o AsesinosOcultos.o CorazasDuras.o EscuadronTerrestre.o
	g++ Main.o Soldado.o Arqueros.o AsesinosOcultos.o CorazasDuras.o EscuadronTerrestre.o -lncurses -o Main
Main.o: Main.cpp Soldado.h Arqueros.h AsesinosOcultos.h CorazasDuras.h EscuadronTerrestre.h
	g++ -c Main.cpp
Soldado.o: Soldado.h Soldado.cpp
	g++ -c Soldado.cpp
Arqueros.o: Arqueros.h Soldado.h Arqueros.cpp
	g++ -c Arqueros.cpp
AsesinosOcultos.o: AsesinosOcultos.h Soldado.h AsesinosOcultos.cpp
	g++ -c AsesinosOcultos.cpp
CorazasDuras.o: CorazasDuras.h Soldado.h CorazasDuras.cpp
	g++ -c CorazasDuras.cpp
EscuadronTerrestre.o: EscuadronTerrestre.h Soldado.h EscuadronTerrestre.cpp
	g++ -c EscuadronTerrestre.cpp
clean:
	rm -f *.o temp
