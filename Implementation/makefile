PROJECT_NAME = SDLC_Calculator

BUILD = build

SRC = main.c\
src/average.c\
src/basic_operation.c\
src/bin_to_dec.c\
src/dec_to_bin.c\
src/exponential.c\
src/factorial.c\
src/interest.c\
src/logarthmic.c\
src/power.c\


TEST_SRC = src/average.c\
src/basic_operation.c\
src/dec_to_bin.c\
src/exponential.c\
src/factorial.c\
src/interest.c\
src/logarthmic.c\
src/power.c\
Test/test_calculator.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

INC	= -Iinc\
-Iunity

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

DOCUMENTATION_OUTPUT = documentation/html

$(PROJECT_NAME):all

.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out
  
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out
	
doc:
	make -C ./documentation


test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit
	./$(TEST_OUTPUT)
  
  
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)
  
  
 $(BUILD):
	mkdir build
