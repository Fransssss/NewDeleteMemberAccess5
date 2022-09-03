// Fransiskus Agapa

#ifndef NEWDELETEMEMBERACCESS5_VALIDDIGIT_H
#define NEWDELETEMEMBERACCESS5_VALIDDIGIT_H

#include "string"
#include "cctype"

using std::isdigit;
using std::string;

bool Validate(const string& strDigit)
{
    int amountValidDigit = strDigit.size();                // indicate all chars is valid digit
    int checkAmountValidDigit  = 0;
    for(size_t i = 0; i < amountValidDigit; ++i)
    {
        if(isdigit(strDigit[i]))
        {
            checkAmountValidDigit += 1;
        }
    }

    if(checkAmountValidDigit != amountValidDigit)          // indicate not all digit
    {
        return false;
    }
    return true;
}


#endif //NEWDELETEMEMBERACCESS5_VALIDDIGIT_H
