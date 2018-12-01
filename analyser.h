#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

str token = ["keywords", "integers", "identifier",  "operator"];

string operators = "*/+-%=";

string keywords[35] = { "if", "else", "do", "while", "for", "int", 
"float", "long", "double", "char", "short", "continue", "break", "case", 
"default", "switch", "public", "private", "class", "struct", "void", 
"static", "typeof", "sizeof", "unsigned", "goto"};

bool is_keyword (string str) {
	for(int i=0; i<35; i++){
		if(str == keywords[i]){
			return true;
		} else {
			return false;
		}
	}
}