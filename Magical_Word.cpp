/*
 *  Dhananjay has recently learned about ASCII values.
 *  He is very fond of experimenting. With his knowledge of ASCII values and character he has developed a special word and named it Dhananjay's Magical word.
 *  A word which consist of alphabets whose ASCII values is a prime number is an Dhananjay's Magical word. An alphabet is Dhananjay's Magical alphabet if its ASCII value is prime.
 *  Dhananjay's nature is to boast about the things he know or have learnt about.
 *  So just to defame his friends he gives few string to his friends and ask them to convert it to Dhananjay's Magical word.
 *  None of his friends would like to get insulted. Help them to convert the given strings to Dhananjay's Magical Word.
 *  
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