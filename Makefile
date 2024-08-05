.EXPORT_ALL_VARIABLES:

# Install dependencies
install:
	sudo apt-get install libsfml-dev 

# Build the project and run it
run:
	g++ main.cpp -o game -lsfml-graphics -lsfml-window -lsfml-system
	./game