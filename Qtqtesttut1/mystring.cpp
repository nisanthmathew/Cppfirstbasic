#include "mystring.h"

MyString::MyString(QObject *parent) : QObject(parent), mystr{nullptr} // empty mystring init
{
    std::cout << "no args constructor called" << std::endl;
    mystr = new char[1];
    *mystr = '\0';
}

MyString::MyString(const char* normalstring): mystr{nullptr}
{
    std::cout << "overloaded constructor called" << std::endl;
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
    std::cout << "copy constructor called" << std::endl;
    mystr = new char[strlen(copystring.mystr)+1];
    strcpy(mystr,copystring.mystr);
}

MyString::MyString(MyString &&movestring): mystr{movestring.mystr} // move constructor
{
    std::cout << "move constructor called" << std::endl;
    movestring = nullptr;
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

MyString &MyString::operator=(const MyString &rhs)
{
    std::cout << "copy assignment called" << std::endl;
    if(this == &rhs){
        return *this; // return the object if the rhs is the same object
    }

    delete [] this->mystr; // deallocate memory on heap to prevent memory leak
    this->mystr = new char[strlen(rhs.mystr)+1];
    strcpy(this->mystr,rhs.mystr);
    return *this;

}

MyString &MyString::operator=(MyString &&rhs)
{
    std::cout << "move assignment called" << std::endl;
    if(this == &rhs){
        return *this;
    }

    delete [] this->mystr;
    this->mystr = rhs.mystr;
    rhs.mystr = nullptr;
    return *this;
}

void MyString::display(std::ostream& outstream) const // display the sting
{
    outstream << mystr << std::endl;
}
