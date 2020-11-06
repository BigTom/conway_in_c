#Set this to @ to keep the makefile quiet
SILENCE = @

#---- Outputs ----#
COMPONENT_NAME = GameOfLife

#--- Inputs ----#
PROJECT_HOME_DIR = .

SRC_FILES = GameOfLife.c

TEST_SRC_FILES = GameOfLifeTest.cpp AllTests.cpp

INCLUDE_DIRS =\
	.\
	$(CPPUTEST_HOME)/include/ \
	$(CPPUTEST_HOME)/include/Platforms/Gcc\

CPPUTEST_WARNINGFLAGS += -Wall
CPPUTEST_WARNINGFLAGS += -Wswitch-default
CPPUTEST_WARNINGFLAGS += -Wfatal-errors
CPPUTEST_CXXFLAGS +=  -std=c++2a
CPPUTEST_CFLAGS += -std=c18
CPPUTEST_CFLAGS += -mmacosx-version-min=10.5

include $(CPPUTEST_HOME)/build/MakefileWorker.mk

