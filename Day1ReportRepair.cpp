/*
Phillip Peng

Code Description: Solves Day1/2020/ Advent of Code problem
TODO: Change it into a function call so it eats less memory as well as able to do more functions
*/


#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main()
{
	std::vector<int> expenses;
	int currValue;

	std::ifstream inStream;
	std::string inFile = "Day1Input.txt";
	inStream.open(inFile);
	if(inStream.fail())
	{
		std::cerr << "File open fail\n";
		exit(1);
	}
	
	while(!inStream.eof())
	{
		inStream >> currValue;
		expenses.push_back(currValue);
		// std::cout << currValue << std::endl; //Trace Statement
	}
	inStream.close();
	int exSize = expenses.size();
	for(int i=0;i < exSize;i++)
	{
		for(int j=0; j < exSize;j++)
		{
			for(int k=0; k < exSize; k++)	
				if(expenses[i]+expenses[j]+expenses[k]==2020)
				{
					std::cout << expenses[i]*expenses[j]*expenses[k] << std::endl;
				}
				// std::cout << expenses[i]*expenses[j] << std::endl;
		
		}
	}  

	return 0;
}