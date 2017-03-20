/*
 *  First line of input contains an integer T number of test cases. Each test case contains an integer N (denoting the length of the string) and a string S.
 */

#include <iostream>
#include <fstream>
#include <string>

void read(int &testCases, std::string *&lenOfStr, std::string *&inStr)
{
    std::ifstream myFile("Magical_Word.txt");
    myFile >> testCases;

    lenOfStr = new std::string[testCases + 10];
    inStr = new std::string[testCases + 10];

    int iter = 0;
    while(myFile)
    {
        std::cout << iter << std::endl;
        myFile >> lenOfStr[iter];
        myFile >> inStr[iter];
        iter++;
    }

    std::cout << lenOfStr[0] << " " << inStr[0] << " " << testCases << std::endl;
    std::cout << lenOfStr[1] << " " << inStr[1] << " " << testCases << std::endl;
    std::cout << lenOfStr[2] << " " << inStr[2] << " " << testCases << std::endl;
    
    myFile.close();
}

int main()
{
    int testCases;
    std::string *lenOfStr = NULL;
    std::string *inStr = NULL;

    read(testCases, lenOfStr, inStr);

    std::cout << "HOME: " << lenOfStr[0] << " " << inStr[0] << " " << testCases << std::endl;
    std::cout << "HOME: " << lenOfStr[1] << " " << inStr[1] << " " << testCases << std::endl;
    std::cout << "HOME: " << lenOfStr[2] << " " << inStr[2] << " " << testCases << std::endl;

    delete [] lenOfStr;
    delete [] inStr;

    return 0;
}