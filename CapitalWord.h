// Fransiskus Agapa

#ifndef NEWDELETEMEMBERACCESS5_CAPITALWORD_H
#define NEWDELETEMEMBERACCESS5_CAPITALWORD_H

#include "string"
#include "cctype"

using std::string;
using std::islower;
using std::toupper;
using std::isalpha;

string Capitalize(string& word)
{
    int spacePos;
    if(islower(word[0]))
    {
        word[0] = toupper(word[0]);
    }

    spacePos = word.find(' ');

    if(isalpha(word[spacePos+1]))
    {
        word[spacePos + 1] = toupper(word[spacePos + 1]);
    }

    return word;
}

#endif //NEWDELETEMEMBERACCESS5_CAPITALWORD_H
