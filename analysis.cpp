#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#include <bits/stdc++.h>

using namespace std;

string keywords[26] = { "if", "else", "do", "while", "for", "int", 
     "float", "long", "double", "char", "short", "continue", "break", "case", 
     "default", "switch", "public", "private", "class", "struct", "void", 
     "static", "typeof", "sizeof", "unsigned", "goto"};

string operators = "*/+-%=";     
 

bool isOperator(char lexeme)
{
     for (int i = 0; i < operators.length(); ++i)
         if (lexeme == operators[i])
            return true;
     return false;
}

bool isKeyword(string lexeme)
{
     for (int i = 0; i < 26; ++i)
         if (lexeme == keywords[i])
            return true;
     return false;
}


