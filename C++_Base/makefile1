edit: person.o
	g++ person.o  -o person
	rm *.o
	mv person.exe ../ExeFile
	../ExeFile/person.exe
person.o : person.cpp
	g++ -c person.cpp person.h
clean:
	rm *.gch 
move:
	mv person.exe ../ExeFile
