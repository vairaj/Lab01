//Jasmine Vaira
//COSC 2030 Lab01

#include <iostream>
#include <fstream>
#include <cstdio>
#include <stdlib.h> //for exit

using namespace std;
const char* filename= "num2.txt";
double numNums = 1;
double numOne = 0;
double numTwo = 0;
double numLast = 0;
double numSecLast = 0, x;


int main()
{
    //cout << "File name: " << endl;
    //cin>>filename; //get file name from keyboard input

    //modified from http://www.fredosaurus.com/notes-cpp/io/readtextfile.html
    ifstream inFile;
    inFile.open(filename);    //open file

     if (inFile.fail())
        {
        cout << "Failure to open " << filename
        << ". Operation ended." << endl;
        exit(1);    //exit with error
        }

    inFile>>numOne;
    inFile>>numTwo;

    while (!inFile.eof())
    {
        inFile>>numLast;
        if (inFile.fail())
        {
            break;
        }
        numNums++;
        x=numSecLast;
        numSecLast = numLast;
    }

    inFile.close(); //close the file

    cout << filename << " has " << numNums << " numbers.\n";
    cout << filename << "'s first two numbers are " << numOne << " and " << numTwo << "." << endl;
    cout << filename << "'s last two numbers are " << x << " and " << numLast << "." << endl;

    return 0;
}
