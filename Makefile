main: main.o funcs.o caesar.o vigenere.o
	g++ -o main main.o funcs.o caesar.o vigenere.o

tests: tests.o funcs.o caesar.o vigenere.o
	g++ -o tests tests.o funcs.o caesar.o vigenere.o



funcs.o: funcs.cpp funcs.h

caesar.o : caesar.cpp caesar.h

vigenere.o : vigenere.cpp vigenere.h

main.o: main.cpp funcs.h caesar.h vigenere.h

tests.o: tests.cpp doctest.h funcs.h caesar.h vigenere.h

clean:
	rm -f main.o funcs.o tests.o caesar.o vigenere.o
