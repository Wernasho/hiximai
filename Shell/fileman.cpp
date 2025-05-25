#include<iostream>
#include<cstdio>

using namespace std;

void readfile(const char* name) 
{
	FILE * file = fopen(name, "r");
	if (file == nullptr)
	{
		cout << "Shucks! Something went wrong." << endl;
		return;
	}
	else
	{
		cout << 
	}
}