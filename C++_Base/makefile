edit: constructor.o
	g++ constructor.o test_constructor.cpp -o constructor
	rm *.o
	mv constructor.exe ../ExeFile
	../ExeFile/constructor.exe
constructor.o : constructor.cpp
	g++ -c constructor.cpp 
clean:
	rm *.gch 
move:
	mv constructor.exe ../ExeFile
