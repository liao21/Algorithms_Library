graph: graph.c graph.h
	gcc -c graph.c
	gcc -o graph graph.o

clean:
	rm -rf *.o graph
