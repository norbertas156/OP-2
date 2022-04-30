test: main.o Studentai.o Isvedimas.o Ivedimai.o Tikrinimai.o VidMed.o 
	g++ -o test main.o -O3

main.o: main.cpp
	g++ -c main.cpp

Isvedimas.o: Isvedimas.cpp
	g++ -c Isvedimas.cpp

Ivedimai.o: Ivedimai.cpp
	g++ -c Ivedimai.cpp

Tikrinimai.o: Tikrinimai.cpp
	g++ -c Tikrinimai.cpp

VidMed.o: VidMed.cpp
	g++ -c VidMed.cpp

Studentai.o: Studentai.cpp
	g++ -c Studentai.cpp

clean: 
	del *.o test.exe
