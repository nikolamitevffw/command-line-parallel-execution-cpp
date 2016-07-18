// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

//#include <stdafx>
#include <iostream>
#include <string>
#include <thread>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main()
{
	int thread_Count;
	char command [128];
	string path_To_Behat_Folder;
	string behat_Profile;
	string behat_Features_Folder;
	string behat_Bin = "bin/behat -p ";
	
	/*char command_2 [] = "bin/behat -p defaultTest features/Nikola/ParallelTest/";
	char behat_Folder [] = "cd /home/mitev/Desktop/qa";
	system(behat_Folder);
	
	system(command_2);*/

	cout << "Enter number of threads you want to run: ";
	cin >> thread_Count;
	/*cout << "Enter path to behat folder: ";
	cin >> path_To_Behat_Folder;*/
	cout << "Enter Behat profile you want to use: ";
	cin >> behat_Profile;
	cout << "Enter Behat feature folder or file location you want to execute: ";
	cin >> behat_Features_Folder;

	string result;
	result = behat_Bin + behat_Profile +" features/"+ behat_Features_Folder;
	string open_Folder_command = "cd /";
	string open_Behat_Folder = open_Folder_command + path_To_Behat_Folder;

	/*char open_Behat_Folder_Command[64];
	strcpy(open_Behat_Folder_Command, open_Behat_Folder.c_str());
	cout << open_Behat_Folder_Command<<"\n";
	system(open_Behat_Folder_Command);*/
	
	strcpy(command, result.c_str());

	cout<< "You will execute "<<thread_Count<<" threads with the following command: '"<<command<<"'.\n";

	

	/*size_t i = 0;
	while (i < thread_Count){
		i++;
		thread thread;
		thread::id(i);
		system(command);
	}*/
	
	//system("pause");
    return 0;
}


