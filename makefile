all: Day1 Day2

Day1: Day1ReportRepair.cpp
	g++ -o Day1 Day1ReportRepair.cpp -Wall -std=c++11
Day2: Day2PasswordPhilosophy.cpp
	g++ -o Day2 Day2PasswordPhilosophy.cpp -Wall -std=c++11

clean:
	rm Day1 Day2