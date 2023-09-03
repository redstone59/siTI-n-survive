NAME = TESTASM

DESCRIPTION = "testung"
COMPRESSED = NO

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

MAKEFILES = ./makefile  $(wildcard */*/makefile) $(wildcard */*/*/makefile)

include $(shell cedev-config --makefile)
