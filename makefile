Point:	mipuntito.o mimensito.o
	g++ mipuntito.o mimensito.o -o point
mimensito.o:	Lab4Main.cpp Lab4.h 
	g++ -c Lab4Main.cpp -o mimensito.o
mipuntito.o:	Lab4.cpp Lab4.h 
	g++ -c Lab4.cpp -o mipuntito.o
