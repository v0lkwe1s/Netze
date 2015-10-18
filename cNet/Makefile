## -*- Makefile -*-
##
## User: williamvolkweis
## Time: Oct 17, 2015 7:10:55 AM
## Makefile created by Oracle Solaris Studio.
##
## This file is generated automatically.
##


#### Compiler and tool definitions shared by all build targets #####
CCC = g++
CXX = g++
BASICOPTS = -O -s --std=c++11
CCFLAGS = $(BASICOPTS)
CXXFLAGS = $(BASICOPTS)
CCADMIN = 


# Define the target directories.
TARGETDIR_netze=build


all: $(TARGETDIR_netze)/netze

## Target: netze
OBJS_netze =  \
	$(TARGETDIR_netze)/main.o \
	$(TARGETDIR_netze)/Board.o \
	$(TARGETDIR_netze)/jsonObject.o \
	$(TARGETDIR_netze)/HummingBoardI2Ex.o \
	$(TARGETDIR_netze)/IntelGalileo.o \
	$(TARGETDIR_netze)/IntelEdison.o \
	$(TARGETDIR_netze)/Pin.o \
	$(TARGETDIR_netze)/RaspberryPi.o \
	$(TARGETDIR_netze)/LibSpi.o \
	$(TARGETDIR_netze)/LibStr.o \
	$(TARGETDIR_netze)/LibJson.o \
	$(TARGETDIR_netze)/LibSocket.o \
	$(TARGETDIR_netze)/ArduinoADC.o \
	$(TARGETDIR_netze)/Spi.o \
	$(TARGETDIR_netze)/Blink.o \
	$(TARGETDIR_netze)/ArduinoUltraSonic.o \
	$(TARGETDIR_netze)/QuantumHomer.o \
	$(TARGETDIR_netze)/PracticalSocket.o \
	$(TARGETDIR_netze)/clientSocket.o \
	$(TARGETDIR_netze)/ServerSocket.o
SYSLIBS_netze = -lpthread 
USERLIBS_netze = $(SYSLIBS_netze) 
DEPLIBS_netze =  
LDLIBS_netze = $(USERLIBS_netze)


# Link or archive
$(TARGETDIR_netze)/netze: $(TARGETDIR_netze) $(OBJS_netze) $(DEPLIBS_netze)
	$(LINK.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ $(OBJS_netze) $(LDLIBS_netze)


# Compile source files into .o files
$(TARGETDIR_netze)/main.o: $(TARGETDIR_netze) main.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ main.cpp

$(TARGETDIR_netze)/Board.o: $(TARGETDIR_netze) Model/Board.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Model/Board.cpp

$(TARGETDIR_netze)/jsonObject.o: $(TARGETDIR_netze) Model/jsonObject.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Model/jsonObject.cpp

$(TARGETDIR_netze)/HummingBoardI2Ex.o: $(TARGETDIR_netze) Model/HummingBoardI2Ex.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Model/HummingBoardI2Ex.cpp

$(TARGETDIR_netze)/IntelGalileo.o: $(TARGETDIR_netze) Model/IntelGalileo.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Model/IntelGalileo.cpp

$(TARGETDIR_netze)/IntelEdison.o: $(TARGETDIR_netze) Model/IntelEdison.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Model/IntelEdison.cpp

$(TARGETDIR_netze)/Pin.o: $(TARGETDIR_netze) Model/Pin.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Model/Pin.cpp

$(TARGETDIR_netze)/RaspberryPi.o: $(TARGETDIR_netze) Model/RaspberryPi.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Model/RaspberryPi.cpp

$(TARGETDIR_netze)/LibSpi.o: $(TARGETDIR_netze) Libraries/LibSpi.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Libraries/LibSpi.cpp

$(TARGETDIR_netze)/LibStr.o: $(TARGETDIR_netze) Libraries/LibStr.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Libraries/LibStr.cpp

$(TARGETDIR_netze)/LibJson.o: $(TARGETDIR_netze) Libraries/LibJson.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Libraries/LibJson.cpp

$(TARGETDIR_netze)/LibSocket.o: $(TARGETDIR_netze) Libraries/LibSocket.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Libraries/LibSocket.cpp

$(TARGETDIR_netze)/ArduinoADC.o: $(TARGETDIR_netze) Modules/ArduinoADC.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Modules/ArduinoADC.cpp

$(TARGETDIR_netze)/Spi.o: $(TARGETDIR_netze) Modules/Spi.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Modules/Spi.cpp

$(TARGETDIR_netze)/Blink.o: $(TARGETDIR_netze) Modules/Blink.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Modules/Blink.cpp

$(TARGETDIR_netze)/ArduinoUltraSonic.o: $(TARGETDIR_netze) Modules/ArduinoUltraSonic.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Modules/ArduinoUltraSonic.cpp

$(TARGETDIR_netze)/QuantumHomer.o: $(TARGETDIR_netze) Extras/QuantumHomer.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Extras/QuantumHomer.cpp

$(TARGETDIR_netze)/PracticalSocket.o: $(TARGETDIR_netze) Socket/PracticalSocket.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Socket/PracticalSocket.cpp

$(TARGETDIR_netze)/clientSocket.o: $(TARGETDIR_netze) Socket/clientSocket.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Socket/clientSocket.cpp

$(TARGETDIR_netze)/ServerSocket.o: $(TARGETDIR_netze) Socket/ServerSocket.cpp
	$(COMPILE.cc) $(CCFLAGS_netze) $(CPPFLAGS_netze) -o $@ Socket/ServerSocket.cpp



#### Clean target deletes all generated files ####
clean:
	rm -f \
		$(TARGETDIR_netze)/netze \
		$(TARGETDIR_netze)/main.o \
		$(TARGETDIR_netze)/Board.o \
		$(TARGETDIR_netze)/jsonObject.o \
		$(TARGETDIR_netze)/HummingBoardI2Ex.o \
		$(TARGETDIR_netze)/IntelGalileo.o \
		$(TARGETDIR_netze)/IntelEdison.o \
		$(TARGETDIR_netze)/Pin.o \
		$(TARGETDIR_netze)/RaspberryPi.o \
		$(TARGETDIR_netze)/LibSpi.o \
		$(TARGETDIR_netze)/LibStr.o \
		$(TARGETDIR_netze)/LibJson.o \
		$(TARGETDIR_netze)/LibSocket.o \
		$(TARGETDIR_netze)/ArduinoADC.o \
		$(TARGETDIR_netze)/Spi.o \
		$(TARGETDIR_netze)/Blink.o \
		$(TARGETDIR_netze)/ArduinoUltraSonic.o \
		$(TARGETDIR_netze)/QuantumHomer.o \
		$(TARGETDIR_netze)/PracticalSocket.o \
		$(TARGETDIR_netze)/clientSocket.o \
		$(TARGETDIR_netze)/ServerSocket.o
	$(CCADMIN)
	rm -f -r $(TARGETDIR_netze)


# Create the target directory (if needed)
$(TARGETDIR_netze):
	mkdir -p $(TARGETDIR_netze)


# Enable dependency checking
.KEEP_STATE:
.KEEP_STATE_FILE:.make.state.GNU-amd64-Linux

