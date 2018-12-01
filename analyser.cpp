#include "code.cpp"
#include <fstream>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int length;
	ifstream filestr;

	filestr.open("code.txt", ios::binary); // open your file
	filestr.seekg(0, ios::end); // put the "cursor" at the end of the file
	length = filestr.tellg(); // find the position of the cursor
	filestr.close(); // close your file

	if( length == 0 ){
		cout << "file is empty";
	}
	
	ifstream file("code.txt");
	if (file.is_open()) {
	    string line;
	    while (getline(file, line)) {
	        cout << line.c_str()<< "\n";
	    }
	    file.close();
	}
	

	
}