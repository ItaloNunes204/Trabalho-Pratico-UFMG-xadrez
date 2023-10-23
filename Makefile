all: bispo, cavalo, dama,jogador,peao,rei,torre,tabuleiro

bispo:
	g++ -c ./src/bispo.cpp -I ./include -o ./build/bispo.o

cavalo:
	g++ -c ./src/cavalo.cpp -I ./include -o ./build/cavalo.o

dama:
	g++ -c ./src/dama.cpp -I ./include -o ./build/dama.o

jogador:
	g++ -c ./src/jogador.cpp -I ./include -o ./build/jogador.o

peao:
	g++ -c ./src/peao.cpp -I ./include -o ./build/peao.o

rei:
	g++ -c ./src/rei.cpp -I ./include -o ./build/rei.o

torre:
	g++ -c ./src/torre.cpp -I ./include -o ./build/torre.o

tabuleiro:
	g++ ./src/main.cpp -o ./build/main.o
