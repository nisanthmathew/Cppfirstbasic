#include "mystring.h"

MyString::MyString(QObject *parent) : QObject(parent), mystr{nullptr} // empty mystring init
{
    mystr = new char[1];
    *mystr = '\0';
}

MyString::MyString(const char* normalstring): mystr{nullptr}
{
    if(normalstring==nullptr){ //checking for empty string
        mystr = new char[1];
        *mystr = '\0';
    }
    else{
        mystr = new char[strlen(normalstring)+1];
        strcpy(mystr,normalstring);
    }
}

MyString::MyString(MyString &copystring): mystr{nullptr} // string copy
{
    mystr = new char[strlen(copystring.mystr)+1];
    strcpy(mystr,copystring.mystr);
}

MyString::~MyString()
{
    delete [] mystr;
}

int MyString::getlength() const
{
    return strlen(mystr);
}

const char* MyString::getmystring() const
{
    return mystr;
}

void MyString::display(std::ostream& outstream) const // display the sting
{
    outstream << mystr << std::endl;
}
