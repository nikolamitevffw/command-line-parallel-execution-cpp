// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <string>
#include <thread>
//#include <cstring>

using namespace std;

int main()
{
	int thread_Count;
	char command [128];
	string path_To_Behat_Folder;
	string behat_Profile;
	string behat_Features_Folder;
	string behat_Bin = "behat/bin -p ";

	cout << "Enter number of threads you want to run: ";
	cin >> thread_Count;
	cout << "Enter path to behat folder: ";
	cin >> path_To_Behat_Folder;
	cout << "Enter Behat profile you want to use: ";
	cin >> behat_Profile;
	cout << "Enter Behat feature folder or file location you want to execute: ";
	cin >> behat_Features_Folder;

	string result;
	result = behat_Bin + behat_Profile +" features/"+ behat_Features_Folder;
	string open_Folder_command = "cd ";
	string open_Behat_Folder = open_Folder_command + path_To_Behat_Folder;

	char open_Behat_Folder_Command[64];
	strcpy_s(open_Behat_Folder_Command, open_Behat_Folder.c_str());
	system(open_Behat_Folder_Command);

	strcpy_s(command, result.c_str());
	cout <<open_Behat_Folder_Command << "\n";
	int counter = 0;
	while (counter < thread_Count){
		thread thread;
		thread::id(counter);
		system(command);
	}

	system("pause");
    return 0;
}
