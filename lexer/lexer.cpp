#include<iostream>
#include <string>
#include <cctype>
#include <vector>
#include <unordered_map>
using namespace std;


// token types
enum class TokenType {
    identifier, number, string, operator, end_of_file, unknown
};

// token structure
struct token{
    TokenType type;
    string value;
}

// Operator 
const unordered_map<string, TokenType> OPERATORS = {
    {"+", TokenType::Operator},
    {"-", TokenType::Operator},
    {"*", TokenType::Operator},
    {"/", TokenType::Operator},
    {"=", TokenType::Operator},
    {"==", TokenType::Operator},
    {"!=", TokenType::Operator},
    {"<", TokenType::Operator},
    {">", TokenType::Operator},
    {"<=", TokenType::Operator},
    {">=", TokenType::Operator},
    {"&&", TokenType::Operator},
    {"||", TokenType::Operator},
    {"!", TokenType::Operator}
};

// Keyword 
const unordered_map<string, TokenType> KEYWORDS = {
    {"if", TokenType::Keyword},
    {"else", TokenType::Keyword},
    {"while", TokenType::Keyword},
    {"for", TokenType::Keyword},
    {"return", TokenType::Keyword},
    {"function", TokenType::Keyword},
    {"let", TokenType::Keyword},
    {"true", TokenType::Keyword},
    {"false", TokenType::Keyword}
};