.PHONY: clean
./bin/run:  ./src/main.o ./src/funcA.o ./src/add.o ./src/funcB.o ./src/funcc.o
	gcc  ./src/*.o -o ./bin/run
./src/main.o: ./src/main.c ./include/*.h
	gcc -c ./src/main.c -o ./src/main.o -I ./include/
./src/funcA.o: ./src/funcA.c ./include/*.h
	gcc -c ./src/funcA.c -o ./src/funcA.o -I ./include/
./src/funcB.o: ./src/funcB.c ./include/*.h
	gcc -c ./src/funcB.c -o ./src/funcB.o -I ./include/
./src/funcc.o: ./src/funcc.c ./include/*.h
	gcc -c ./src/funcc.c -o ./src/funcc.o -I ./include/
./src/add.o: ./src/add.c ./include/*.h
	gcc -c ./src/add.c -o ./src/add.o -I ./include/
clean:
	rm ./src/*.o
	rm ./bin/run
