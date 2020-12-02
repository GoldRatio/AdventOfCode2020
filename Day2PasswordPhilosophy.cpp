/*
Phillip Peng

Code Description: Solves Day2/2020 Advent of Code problem
TODO: get more familiar with inputs.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

bool checkPasswordPart1(int min, int max, char letter, std::string password);
bool checkPasswordPart2(int pos1, int pos2, char letter, std::string password);

int main()
{
	std::ifstream inStream;
	inStream.open("Day2Input.txt");
	if(inStream.fail()){std::cerr << "File open fail\n"; exit(1);}
	
	int  numCorrectPassowrds=0, firstInt, secondInt;
	char letter, buffer;
	std::string password, minMax, strMin, strMax; 

	while(!inStream.eof())
	{
		getline(inStream, strMin, '-');
		getline(inStream,strMax, ' ');
		inStream.get(letter);
		inStream.get(buffer);
		inStream.get(buffer);
		inStream >> password;
		inStream.get(buffer);
		inStream.get(buffer);
		firstInt = std::stoi(strMin);
		secondInt = std::stoi(strMax);
		
		if(checkPasswordPart2(firstInt,secondInt,letter, password))
		{
			std::cout << strMin << " " << strMax << " " << letter << " "
				  << password << std::endl; // Trace Statement
			numCorrectPassowrds++;
		}

	}
	inStream.close();
	std::cout << numCorrectPassowrds << std::endl;

	return 0;
}

bool checkPasswordPart1(int min, int max, char letter, std::string password)
{
	int letterAmount=0, passSize = password.size();
	for(int i=0;i < passSize;i++)
	{
		if(password[i]==letter)
		{
			letterAmount++;
		}
	}
	if(min<=letterAmount && letterAmount<=max){return true;}
	return false;
} 

bool checkPasswordPart2(int pos1, int pos2, char letter, std::string password)
{
	int numPosCorrect=0;
	if(password[pos1-1]==letter){numPosCorrect++;}
	if(password[pos2-1]==letter){numPosCorrect++;}
	if(numPosCorrect==1)
	{
		return true;
	}
	return false;
}