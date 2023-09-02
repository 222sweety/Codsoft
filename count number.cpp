//Word count - Develop a program that counts the number of words 
//in a given text file. prompt the user to enter the file name and display 
// the number of word count.

#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	ifstream ipfile;
	int words = 0;
	string word;
	string filename;
	
	cout << " Enter the text file name: ";
    getline(cin,filename);
    
	ipfile.open(filename.c_str());
	
	while(ipfile >> word)
	{

		++words;
	}
	
	cout << "Number of words in Testfile is: " << words;
    ipfile.close(); //closing the Textfile after work done.

    cin.get();  
    return 0;
}
