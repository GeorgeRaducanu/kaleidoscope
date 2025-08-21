// The lexer should return tokens [0-255] if it is unknown character
// or the following fot known things
#include <string>

enum Token{
    tok_eof = -1,

    //commands
    tok_def = -2,
    tok_extern = -3,

    // primary
    tok_identifier = -4,
    tok_number = -5,
};

static std::string IdentifierStr; // fillef in if tok_identifier
static double NumVal; // filler in if tok_number