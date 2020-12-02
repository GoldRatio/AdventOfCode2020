all: Day1 

Day1: Day1ReportRepair.cpp
	g++ -o Day1 Day1ReportRepair.cpp -Wall -std=c++11

clean:
	rm *.o Day1 