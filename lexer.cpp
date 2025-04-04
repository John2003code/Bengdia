#include<iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;


// token types
enum class TokenType {
    IDENTIFIER, KEYWORD, NUMBER, SYMBOL, END_OF_FILE, UNKNOWN
};

// token structure

