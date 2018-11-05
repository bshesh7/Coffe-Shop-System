CXXFLAGS += --std=c++17

main: main.o product.o donut.o java.o store.o
	${CXX} ${CXXFLAGS} -o main main.o product.o donut.o java.o store.o
main.o: main.cpp *.h
	${CXX} ${CXXFLAGS} -c main.cpp
product.o: product.cpp *.h
	${CXX} ${CXXFLAGS} -c product.cpp
donut.o: donut.cpp donut.cpp *.h
	${CXX} ${CXXFLAGS} -c donut.cpp
java.o: java.cpp java.cpp *.h
	${CXX} ${CXXFLAGS} -c java.cpp
store.o: store.cpp store.cpp *.h
	${CXX} ${CXXFLAGS} -c store.cpp

clean:
	-rm -f *.gch *.o main

