
CPP = g++


PRO_NAME=atf
PRO_HOME=../
SRCS=$(PRO_HOME)/src/*.cpp $(PRO_HOME)/src/*.c
INCS=
LDS=
OBJS=*.o 

#OBJS = $(patsubst %.cpp,%.o,$(wildcard *.cpp)) $(patsubst %.c,%.o,$(wildcard *.c))

all:OBJS
#	$(warning  $(PRO_HOME))
	$(CPP) -o $(PRO_NAME) $(OBJS) $(INCS) $(LDS)
OBJS:
	$(CPP) -c $(SRCS) $(INCS)
clean:
	rm -rf $(PRO_NAME) $(OBJS)
