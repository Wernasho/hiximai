#include<iostream>
#include<cmath>
#include<unordered_map>
#include<sstream>
#include<vector>
#include<functional>
#include"writefile.h"
#include"readfile.h"
#include<filesystem> 
using std::string; using std::cout; using std::endl; using std::cin;
namespace fs = std::filesystem;

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

string ask(string question)
{
	string input;
	cout << question << ": ";
	std::getline(cin,input);
	return input;
}

extern "C" {
	#include "writefile.h" // Función externa (por ahora comentada si da problemas)
	#include "readfile.h"
}

int main()
{
	const string version = "Alpha--";
	string input;
	string dir = "$:";
	string user = ask("Please enter your username");
	//cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Hi, " << user << ", Welcome to Hiximai Version '" << version << "'" << endl;
	bool up2date = false;
	if (!up2date) { //<- Mensaje tipo "che instala la version nueva, pero solo si te pinta eh"
	cout <<"Hey, "<< user <<", We have noticed that your curent Hiximai version is outdated"<< endl;
	cout << "Please check https://hiximai.org/versions to install the newest version." << endl;
	cout << "That is of course if you can and want to. Unlike CERTAIN OSes, we do care about what our users think and won't force any updates..." << endl;
	cout << "Because we're not a megacorp. Anyaywas, that's everything. Carry on! \n- Love, W ♥" << endl;
	}
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
		}},
		{"whoami", [&](const std::vector<std::string>&) {
			cout << "Current Username: " << user << endl;
		}},
		{"versionpls", [&](const std::vector<std::string>&) {
			cout << "Current version: " << version << endl;
		}},
		{"writefile", [&](const std::vector<std::string>&) {
			string filename, content;
			cout << "File to write: ";
			std::getline(cin, filename);
			cout << "Content: ";
			std::getline(cin, content);
			write_file(filename.c_str(), content.c_str());
		}},
		{"readfile", [&](const std::vector<std::string>&) {
			string filename;
			cout << "File to read: ";
			std::getline(cin, filename);
			readfile(filename.c_str());
		}},
		{"shout", [&](const std::vector<std::string>& args) {
			if (args.size() < 2) {
			    cout << "We need more than that, y'know." << endl;
		        cout << "(You need to pass another argument, dummy)" << endl;
		    } else {
		        // Une todos los argumentos después de "shout" (desde args[1] hasta el final)
		        for (size_t i = 1; i < args.size(); ++i) {
		            cout << args[i];
		            if (i != args.size() - 1) cout << " ";  // Añade espacio entre palabras
		        }
		        cout << endl;  // Salto de línea al final
		    }
		}}
	};
	while (true)
	{
		cout << dir << "; ";
		std::getline(cin, input);
		if (input == "exit") break;

		auto tokens = split_input(input);
		if (tokens.empty()) continue;

		auto cmd = commands.find(tokens[0]);
		if (cmd != commands.end()) {
			cmd->second(tokens); // Ejecuta la función
		}
		else {
			cout << "Command not found." << endl;
		}
	}
	return 0;
};