#include<iostream>
#include<cmath>
#include<unordered_map>
#include<sstream>
#include<vector>
#include <functional>
using std::string; using std::cout; using std::endl; using std::cin;
string ask(string question);
std::vector<std::string> split_input(const std::string& input) {
	std::vector<std::string> parts;
	std::istringstream iss(input);
	std::string part;
	while (iss >> part)
	{
		parts.push_back(part);
	}
	return parts;
}

extern "C" 
{ 
	#include "writefile.h" // Función para editar archivos que todavía no funciona del todo.
}
int main()
{
	string version = "Alhpa--";
	string input;
	string dir = "$";
	string user = ask("Please enter your username");
	cout << "Hi, " << user << ", Welcome to Hiximai Version " << version << endl;
	std::unordered_map<std::string, std::function<void(const std::vector<std::string>&)>> commands =
	{
		{"chdir", [&](const std::vector<std::string>& args) {
				if (args.size() < 2) {
					cout << "Error: 0 out of 1 needed arguments were given." << endl;
					cout << "Please make sure to specify the destination directory " << endl;
				}
				else {
					dir = args[1];
					cout << "New dir: " << dir << endl;
				}
			}
		};
		{"whoami", [&]{ cout << "Current Username: " << user << endl;}};
		{"versionpls", [&]{cout << "Current version: " << version}};
	}
	while (true)
	{
		cout << dir << "; ";
		std::getline(cin, input);
		if (input == "exit") break;
		else if (input == "whoami") cout << user << endl;
		else if (input == "versionpls") 
		{
			cout << "Current Version: " << sys["version"] <<endl;
		}
		else if (input == "whatthelangis")
		{
			cout << sys["lang"] <<endl;
		}
		/*else if (input == "writefile")
		{
			cout << "File to write: ";
			char* newinput;
			getline(cin ,newinput);
			cout << "Content: ";
			char* a;
			getline(cin, a);
			writefile(newinput, a);
		}*/
		else
		{
		 	cout << "Command not found." << endl;
		 	continue;
		}
	}
	return 0;
}

string ask(string question)
{
	string input;
	cout << question << ": ";
	std::getline(cin,input);
	return input;
}