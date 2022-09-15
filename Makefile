
output: programOne.o programTwo.o programTwoWithWhileLoop.o output
	g++ programOne programTwo programTwoWithWhileLoop -o output
	
programOne.o: programOne.cpp
	g++ -c programOne.cpp

programTwo.o: programTwo.cpp
	g++ -c programTwo.cpp

programTwoWithWhileLoop.o: programTwoWithWhileLoop.cpp
	g++ -c programTwoWithWhileLoop.cpp

clean:
	rm *.o output
