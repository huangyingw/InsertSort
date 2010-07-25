run : InsertSort.o
	g++ -o run InsertSort.o
InsertSort.o : InsertSort.cpp
	g++ -c InsertSort.cpp
clean :
	rm run InsertSort.o
