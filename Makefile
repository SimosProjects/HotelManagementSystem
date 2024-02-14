# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -Iinclude

# Source directory
SRCDIR = src

# Include directory
INCLUDEDIR = include

# Object directory
OBJDIR = obj

# Source files
SOURCES = $(wildcard $(SRCDIR)/*.cpp)

# Object files
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

# Executable name
EXECUTABLE = myprogram

# Build rule for the main program
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile object files for the main program
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Create obj directory if it doesn't exist
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Phony target for cleaning up
.PHONY: clean
clean:
	del obj\Account.o
	del obj\Hotel.o
	del obj\HotelLocation.o
	del obj\Invoice.o
	del obj\Notification.o
	del obj\Room.o
	del obj\RoomBooking.o
	del obj\RoomCharge.o
	del obj\RoomHouseKeeping.o
	del obj\RoomKey.o
	del obj\main.o
	del myprogram.exe
