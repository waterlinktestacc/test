CC=i586-mingw32msvc-gcc
CFLAGS=-c -Wall -mwindows
LDFLAGS=
SOURCEPATH=source/
LIBPATH=lib/
BINPATH=bin/
BGATEST=bga
SOURCES=source/x.cpp source/y.cpp source/mustdie.cpp source/z.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=bin/hello.exe

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

