CXX=g++ -std=c++11
XXFLAGS=-Wall -MMD
EXEC=main
OBJECTS=main.o BinNode.o BinList.o player.o human.o randmath.o
DEPENDS=${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${XXFLAGS} ${OBJECTS} -o ${EXEC}
-include ${DEPENDS}

clean:
	rm ${OBJECTS}
