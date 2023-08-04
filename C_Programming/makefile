./bin/run:./src/main.o ./src/funcA.o ./src/funcB.o ./src/funcc.o ./src/add.o
	gcc $^ -o $@
./src/%.o:./src/%.c
	gcc -c $< -o $@ -I ./include/

.PHONY: clean
clean:
	rm ./src/*.o
	rm ./bin/run
