#include <string>

void initNames();


void freeNames();


// results destroyed internally when freeNames called
const char *findCloseFirstName( char *inString );

const char *findCloseLastName( char *inString );

std::string getNameForHash(int hash);