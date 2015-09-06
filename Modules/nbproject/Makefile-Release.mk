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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/1684374696/Blink.o \
	${OBJECTDIR}/_ext/1415132743/PracticalSocket.o \
	${OBJECTDIR}/_ext/1415132743/mSocket.o \
	${OBJECTDIR}/_ext/1415132743/strLib.o \
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
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/modules

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/modules: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/modules ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/1684374696/Blink.o: /home/Netze/Netze/Modules/Blink.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1684374696
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Werror -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1684374696/Blink.o /home/Netze/Netze/Modules/Blink.cpp

${OBJECTDIR}/_ext/1415132743/PracticalSocket.o: /home/Netze/Netze/netze/PracticalSocket.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1415132743
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1415132743/PracticalSocket.o /home/Netze/Netze/netze/PracticalSocket.cpp

${OBJECTDIR}/_ext/1415132743/mSocket.o: /home/Netze/Netze/netze/mSocket.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1415132743
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1415132743/mSocket.o /home/Netze/Netze/netze/mSocket.cpp

${OBJECTDIR}/_ext/1415132743/strLib.o: /home/Netze/Netze/netze/strLib.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1415132743
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1415132743/strLib.o /home/Netze/Netze/netze/strLib.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/modules

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
