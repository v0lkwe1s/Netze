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
	${OBJECTDIR}/_ext/1415132743/intelEdison.o \
	${OBJECTDIR}/Pin.o \
	${OBJECTDIR}/PracticalSocket.o \
	${OBJECTDIR}/RaspberryPi.o \
	${OBJECTDIR}/board.o \
	${OBJECTDIR}/clientSocket.o \
	${OBJECTDIR}/hummingBoardI2Ex.o \
	${OBJECTDIR}/intelGalileo.o \
	${OBJECTDIR}/mSocket.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/serverSocket.o \
	${OBJECTDIR}/strLib.o


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
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netze

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netze: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netze ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/1415132743/intelEdison.o: /home/Netze/Netze/netze/intelEdison.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1415132743
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1415132743/intelEdison.o /home/Netze/Netze/netze/intelEdison.cpp

${OBJECTDIR}/Pin.o: Pin.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Pin.o Pin.cpp

${OBJECTDIR}/PracticalSocket.o: PracticalSocket.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PracticalSocket.o PracticalSocket.cpp

${OBJECTDIR}/RaspberryPi.o: RaspberryPi.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/RaspberryPi.o RaspberryPi.cpp

${OBJECTDIR}/board.o: board.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/board.o board.cpp

${OBJECTDIR}/clientSocket.o: clientSocket.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/clientSocket.o clientSocket.cpp

${OBJECTDIR}/hummingBoardI2Ex.o: hummingBoardI2Ex.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/hummingBoardI2Ex.o hummingBoardI2Ex.cpp

${OBJECTDIR}/intelGalileo.o: intelGalileo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/intelGalileo.o intelGalileo.cpp

${OBJECTDIR}/mSocket.o: mSocket.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/mSocket.o mSocket.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/serverSocket.o: serverSocket.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/serverSocket.o serverSocket.cpp

${OBJECTDIR}/strLib.o: strLib.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/strLib.o strLib.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netze

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
