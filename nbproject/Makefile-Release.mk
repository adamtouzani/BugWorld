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
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/source_files/Bug.o \
	${OBJECTDIR}/source_files/Cell.o \
	${OBJECTDIR}/source_files/I_direction.o \
	${OBJECTDIR}/source_files/I_drop.o \
	${OBJECTDIR}/source_files/I_flip.o \
	${OBJECTDIR}/source_files/I_mark.o \
	${OBJECTDIR}/source_files/I_move.o \
	${OBJECTDIR}/source_files/I_pickup.o \
	${OBJECTDIR}/source_files/I_sense.o \
	${OBJECTDIR}/source_files/I_turn.o \
	${OBJECTDIR}/source_files/I_unmark.o \
	${OBJECTDIR}/source_files/Instruction.o \
	${OBJECTDIR}/source_files/Marker.o \
	${OBJECTDIR}/source_files/Structs.o \
	${OBJECTDIR}/source_files/World.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1 \
	${TESTDIR}/TestFiles/f2

# Test Object Files
TESTOBJECTFILES= \
	${TESTDIR}/tests/CellTest.o \
	${TESTDIR}/tests/CellTestRunner.o \
	${TESTDIR}/tests/WorldTest.o \
	${TESTDIR}/tests/WorldTestRunner.o

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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/bugworld

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/bugworld: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/bugworld ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/source_files/Bug.o: source_files/Bug.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/Bug.o source_files/Bug.cpp

${OBJECTDIR}/source_files/Cell.o: source_files/Cell.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/Cell.o source_files/Cell.cpp

${OBJECTDIR}/source_files/I_direction.o: source_files/I_direction.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_direction.o source_files/I_direction.cpp

${OBJECTDIR}/source_files/I_drop.o: source_files/I_drop.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_drop.o source_files/I_drop.cpp

${OBJECTDIR}/source_files/I_flip.o: source_files/I_flip.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_flip.o source_files/I_flip.cpp

${OBJECTDIR}/source_files/I_mark.o: source_files/I_mark.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_mark.o source_files/I_mark.cpp

${OBJECTDIR}/source_files/I_move.o: source_files/I_move.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_move.o source_files/I_move.cpp

${OBJECTDIR}/source_files/I_pickup.o: source_files/I_pickup.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_pickup.o source_files/I_pickup.cpp

${OBJECTDIR}/source_files/I_sense.o: source_files/I_sense.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_sense.o source_files/I_sense.cpp

${OBJECTDIR}/source_files/I_turn.o: source_files/I_turn.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_turn.o source_files/I_turn.cpp

${OBJECTDIR}/source_files/I_unmark.o: source_files/I_unmark.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_unmark.o source_files/I_unmark.cpp

${OBJECTDIR}/source_files/Instruction.o: source_files/Instruction.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/Instruction.o source_files/Instruction.cpp

${OBJECTDIR}/source_files/Marker.o: source_files/Marker.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/Marker.o source_files/Marker.cpp

${OBJECTDIR}/source_files/Structs.o: source_files/Structs.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/Structs.o source_files/Structs.cpp

${OBJECTDIR}/source_files/World.o: source_files/World.cpp
	${MKDIR} -p ${OBJECTDIR}/source_files
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/World.o source_files/World.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-tests-subprojects .build-conf ${TESTFILES}
.build-tests-subprojects:

${TESTDIR}/TestFiles/f1: ${TESTDIR}/tests/CellTest.o ${TESTDIR}/tests/CellTestRunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS}   `cppunit-config --libs`   

${TESTDIR}/TestFiles/f2: ${TESTDIR}/tests/WorldTest.o ${TESTDIR}/tests/WorldTestRunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f2 $^ ${LDLIBSOPTIONS}   `cppunit-config --libs`   


${TESTDIR}/tests/CellTest.o: tests/CellTest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/CellTest.o tests/CellTest.cpp


${TESTDIR}/tests/CellTestRunner.o: tests/CellTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/CellTestRunner.o tests/CellTestRunner.cpp


${TESTDIR}/tests/WorldTest.o: tests/WorldTest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/WorldTest.o tests/WorldTest.cpp


${TESTDIR}/tests/WorldTestRunner.o: tests/WorldTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/WorldTestRunner.o tests/WorldTestRunner.cpp


${OBJECTDIR}/source_files/Bug_nomain.o: ${OBJECTDIR}/source_files/Bug.o source_files/Bug.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/Bug.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/Bug_nomain.o source_files/Bug.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/Bug.o ${OBJECTDIR}/source_files/Bug_nomain.o;\
	fi

${OBJECTDIR}/source_files/Cell_nomain.o: ${OBJECTDIR}/source_files/Cell.o source_files/Cell.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/Cell.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/Cell_nomain.o source_files/Cell.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/Cell.o ${OBJECTDIR}/source_files/Cell_nomain.o;\
	fi

${OBJECTDIR}/source_files/I_direction_nomain.o: ${OBJECTDIR}/source_files/I_direction.o source_files/I_direction.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/I_direction.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_direction_nomain.o source_files/I_direction.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/I_direction.o ${OBJECTDIR}/source_files/I_direction_nomain.o;\
	fi

${OBJECTDIR}/source_files/I_drop_nomain.o: ${OBJECTDIR}/source_files/I_drop.o source_files/I_drop.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/I_drop.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_drop_nomain.o source_files/I_drop.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/I_drop.o ${OBJECTDIR}/source_files/I_drop_nomain.o;\
	fi

${OBJECTDIR}/source_files/I_flip_nomain.o: ${OBJECTDIR}/source_files/I_flip.o source_files/I_flip.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/I_flip.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_flip_nomain.o source_files/I_flip.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/I_flip.o ${OBJECTDIR}/source_files/I_flip_nomain.o;\
	fi

${OBJECTDIR}/source_files/I_mark_nomain.o: ${OBJECTDIR}/source_files/I_mark.o source_files/I_mark.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/I_mark.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_mark_nomain.o source_files/I_mark.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/I_mark.o ${OBJECTDIR}/source_files/I_mark_nomain.o;\
	fi

${OBJECTDIR}/source_files/I_move_nomain.o: ${OBJECTDIR}/source_files/I_move.o source_files/I_move.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/I_move.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_move_nomain.o source_files/I_move.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/I_move.o ${OBJECTDIR}/source_files/I_move_nomain.o;\
	fi

${OBJECTDIR}/source_files/I_pickup_nomain.o: ${OBJECTDIR}/source_files/I_pickup.o source_files/I_pickup.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/I_pickup.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_pickup_nomain.o source_files/I_pickup.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/I_pickup.o ${OBJECTDIR}/source_files/I_pickup_nomain.o;\
	fi

${OBJECTDIR}/source_files/I_sense_nomain.o: ${OBJECTDIR}/source_files/I_sense.o source_files/I_sense.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/I_sense.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_sense_nomain.o source_files/I_sense.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/I_sense.o ${OBJECTDIR}/source_files/I_sense_nomain.o;\
	fi

${OBJECTDIR}/source_files/I_turn_nomain.o: ${OBJECTDIR}/source_files/I_turn.o source_files/I_turn.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/I_turn.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_turn_nomain.o source_files/I_turn.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/I_turn.o ${OBJECTDIR}/source_files/I_turn_nomain.o;\
	fi

${OBJECTDIR}/source_files/I_unmark_nomain.o: ${OBJECTDIR}/source_files/I_unmark.o source_files/I_unmark.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/I_unmark.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/I_unmark_nomain.o source_files/I_unmark.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/I_unmark.o ${OBJECTDIR}/source_files/I_unmark_nomain.o;\
	fi

${OBJECTDIR}/source_files/Instruction_nomain.o: ${OBJECTDIR}/source_files/Instruction.o source_files/Instruction.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/Instruction.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/Instruction_nomain.o source_files/Instruction.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/Instruction.o ${OBJECTDIR}/source_files/Instruction_nomain.o;\
	fi

${OBJECTDIR}/source_files/Marker_nomain.o: ${OBJECTDIR}/source_files/Marker.o source_files/Marker.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/Marker.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/Marker_nomain.o source_files/Marker.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/Marker.o ${OBJECTDIR}/source_files/Marker_nomain.o;\
	fi

${OBJECTDIR}/source_files/Structs_nomain.o: ${OBJECTDIR}/source_files/Structs.o source_files/Structs.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/Structs.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/Structs_nomain.o source_files/Structs.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/Structs.o ${OBJECTDIR}/source_files/Structs_nomain.o;\
	fi

${OBJECTDIR}/source_files/World_nomain.o: ${OBJECTDIR}/source_files/World.o source_files/World.cpp 
	${MKDIR} -p ${OBJECTDIR}/source_files
	@NMOUTPUT=`${NM} ${OBJECTDIR}/source_files/World.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/source_files/World_nomain.o source_files/World.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/source_files/World.o ${OBJECTDIR}/source_files/World_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	    ${TESTDIR}/TestFiles/f2 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
