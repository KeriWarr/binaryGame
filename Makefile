CXX=g++ -std=c++11
XXFLAGS=-Wall -MMD
EXEC=main
OBJECTS=main.o BinNode.o BinList.o Player.o Human.o RandMath.o BinStrings.o ComputerPlayer.o
DEPENDS=${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${XXFLAGS} ${OBJECTS} -o ${EXEC}
-include ${DEPENDS}

clean:
	rm ${OBJECTS}
