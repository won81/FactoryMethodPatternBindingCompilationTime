.SUFFIXES : .cc .o

TOPDIR := $(shell pwd)

INC := -I$(TOPDIR)/include
ifeq ($(OS),linux)
INC += -I$(TOPDIR)/include/linux
else ifeq ($(OS),nuttx)
INC += -I$(TOPDIR)/include/nuttx
endif
CXX := g++
CXXFLAGS := -g $(INC)

OBJS := main.o
SRCS := main.cpp

TARGET := main

all: $(TARGET)

$(TARGET) : $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

clean:
	rm -rf $(OBJS) $(TARGET) core

dep:
	gccmakedep $(INC) $(SRCS)

debug:
	@echo $(TOPDIR)
# DO NOT DELETE
