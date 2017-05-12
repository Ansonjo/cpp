edit: test.o
	g++ test.o  -o test
	rm *.o
	mv test.exe ../ExeFile
	../ExeFile/test.exe
test.o : test.cpp
	g++ -c test.cpp 

clean:
	rm *.o
move:
	mv test.exe ../ExeFile
