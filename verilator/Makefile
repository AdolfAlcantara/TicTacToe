TARGET=tictactoe_test
.PHONY: $(TARGET)
VSRC_DIR=../xo
VERILOG_SOURCES=$(VSRC_DIR)/tictactoe.v
TOP_MODULE=tictactoe
VERILATOR=verilator
all: $(TARGET)

LDFLAGS=-lSDL2
CFLAGS=-g -O2 -I/usr/include/SDL2

$(TARGET): $(VERILOG_SOURCES) $(VSRC_DIR)/$(TOP_MODULE).v
	$(VERILATOR) -Wno-fatal -I$(VSRC_DIR)/ --cc $^ --trace --exe ../$(@).cpp ../vga_display.cpp --top-module $(TOP_MODULE) -Mdir $(@) -CFLAGS "$(CFLAGS)" -LDFLAGS "$(LDFLAGS)"
	make -C $(@) -f V$(TOP_MODULE).mk
clean:: 
	rm -rf *.o $(TARGET)
distclean:: clean
	rm -rf *~ *.txt *.vcd *.mif *.orig
