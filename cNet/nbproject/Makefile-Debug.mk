#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Extras/QuantumHomer.o \
	${OBJECTDIR}/Extras/Spi.o \
	${OBJECTDIR}/Libraries/LibJson.o \
	${OBJECTDIR}/Libraries/LibSocket.o \
	${OBJECTDIR}/Libraries/LibSpi.o \
	${OBJECTDIR}/Libraries/LibStr.o \
	${OBJECTDIR}/Model/Board.o \
	${OBJECTDIR}/Model/HummingBoardI2Ex.o \
	${OBJECTDIR}/Model/IntelEdison.o \
	${OBJECTDIR}/Model/IntelGalileo.o \
	${OBJECTDIR}/Model/Pin.o \
	${OBJECTDIR}/Model/RaspberryPi.o \
	${OBJECTDIR}/Model/jsonObject.o \
	${OBJECTDIR}/Modules/ArduinoADC.o \
	${OBJECTDIR}/Modules/ArduinoUltraSonic.o \
	${OBJECTDIR}/Modules/Blink.o \
	${OBJECTDIR}/Socket/PracticalSocket.o \
	${OBJECTDIR}/Socket/ServerSocket.o \
	${OBJECTDIR}/Socket/clientSocket.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-lcurses -lpthread

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cnet

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cnet: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cnet ${OBJECTFILES} ${LDLIBSOPTIONS} --sdt=c++11

${OBJECTDIR}/Extras/QuantumHomer.o: Extras/QuantumHomer.cpp 
	${MKDIR} -p ${OBJECTDIR}/Extras
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Extras/QuantumHomer.o Extras/QuantumHomer.cpp

${OBJECTDIR}/Extras/Spi.o: Extras/Spi.cpp 
	${MKDIR} -p ${OBJECTDIR}/Extras
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Extras/Spi.o Extras/Spi.cpp

${OBJECTDIR}/Libraries/LibJson.o: Libraries/LibJson.cpp 
	${MKDIR} -p ${OBJECTDIR}/Libraries
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Libraries/LibJson.o Libraries/LibJson.cpp

${OBJECTDIR}/Libraries/LibSocket.o: Libraries/LibSocket.cpp 
	${MKDIR} -p ${OBJECTDIR}/Libraries
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Libraries/LibSocket.o Libraries/LibSocket.cpp

${OBJECTDIR}/Libraries/LibSpi.o: Libraries/LibSpi.cpp 
	${MKDIR} -p ${OBJECTDIR}/Libraries
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Libraries/LibSpi.o Libraries/LibSpi.cpp

${OBJECTDIR}/Libraries/LibStr.o: Libraries/LibStr.cpp 
	${MKDIR} -p ${OBJECTDIR}/Libraries
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Libraries/LibStr.o Libraries/LibStr.cpp

${OBJECTDIR}/Model/Board.o: Model/Board.cpp 
	${MKDIR} -p ${OBJECTDIR}/Model
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Model/Board.o Model/Board.cpp

${OBJECTDIR}/Model/HummingBoardI2Ex.o: Model/HummingBoardI2Ex.cpp 
	${MKDIR} -p ${OBJECTDIR}/Model
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Model/HummingBoardI2Ex.o Model/HummingBoardI2Ex.cpp

${OBJECTDIR}/Model/IntelEdison.o: Model/IntelEdison.cpp 
	${MKDIR} -p ${OBJECTDIR}/Model
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Model/IntelEdison.o Model/IntelEdison.cpp

${OBJECTDIR}/Model/IntelGalileo.o: Model/IntelGalileo.cpp 
	${MKDIR} -p ${OBJECTDIR}/Model
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Model/IntelGalileo.o Model/IntelGalileo.cpp

${OBJECTDIR}/Model/Pin.o: Model/Pin.cpp 
	${MKDIR} -p ${OBJECTDIR}/Model
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Model/Pin.o Model/Pin.cpp

${OBJECTDIR}/Model/RaspberryPi.o: Model/RaspberryPi.cpp 
	${MKDIR} -p ${OBJECTDIR}/Model
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Model/RaspberryPi.o Model/RaspberryPi.cpp

${OBJECTDIR}/Model/jsonObject.o: Model/jsonObject.cpp 
	${MKDIR} -p ${OBJECTDIR}/Model
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Model/jsonObject.o Model/jsonObject.cpp

${OBJECTDIR}/Modules/ArduinoADC.o: Modules/ArduinoADC.cpp 
	${MKDIR} -p ${OBJECTDIR}/Modules
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modules/ArduinoADC.o Modules/ArduinoADC.cpp

${OBJECTDIR}/Modules/ArduinoUltraSonic.o: Modules/ArduinoUltraSonic.cpp 
	${MKDIR} -p ${OBJECTDIR}/Modules
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modules/ArduinoUltraSonic.o Modules/ArduinoUltraSonic.cpp

${OBJECTDIR}/Modules/Blink.o: Modules/Blink.cpp 
	${MKDIR} -p ${OBJECTDIR}/Modules
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Modules/Blink.o Modules/Blink.cpp

${OBJECTDIR}/Socket/PracticalSocket.o: Socket/PracticalSocket.cpp 
	${MKDIR} -p ${OBJECTDIR}/Socket
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Socket/PracticalSocket.o Socket/PracticalSocket.cpp

${OBJECTDIR}/Socket/ServerSocket.o: Socket/ServerSocket.cpp 
	${MKDIR} -p ${OBJECTDIR}/Socket
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Socket/ServerSocket.o Socket/ServerSocket.cpp

${OBJECTDIR}/Socket/clientSocket.o: Socket/clientSocket.cpp 
	${MKDIR} -p ${OBJECTDIR}/Socket
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Socket/clientSocket.o Socket/clientSocket.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cnet

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
