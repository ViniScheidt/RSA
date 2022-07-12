
compile:
	g++ *.cpp
.PHONY: compile

run: compile
	./a.out
.PHONY: compile