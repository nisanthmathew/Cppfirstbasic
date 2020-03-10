#include <QtTest>
#include <QCoreApplication>
#include <iostream>
#include <sstream>
// add necessary includes here
#include "udemytut1.h"
#include "udemytut2.h"
#include "udemypointerchallenge.h"
#include "mystring.h"


class Qtestudemy : public QObject
{
    Q_OBJECT

public:
    Qtestudemy();
    ~Qtestudemy();

private slots:

    void test_case_vectors();
    void test_case_operators_positive();
    void test_case_operators_negative();
    void test_case_operators_zero();
    void test_case_pointers_init();
    void test_case_pointers_arraycreator();
    void test_case_operatoroverloading_mystring_empty();
    void test_case_operatoroverloading_mystring_normal();
    void test_case_operatoroverloading_mystring_copy();
    void test_case_operatoroverloading_assignmentop();
    void test_case_operatoroverloading_moveop();
    void test_case_operatoroverloading_negationop();
    void test_case_operatoroverloading_negationmixedcase();
    void test_case_operatoroverloading_negationemptystringcase();
    void test_case_operatoroverloading_additionop();
    void test_case_operatoroverloading_additionop_empty();
};


Qtestudemy::Qtestudemy()
{

}

Qtestudemy::~Qtestudemy()
{

}


void Qtestudemy::test_case_vectors()
{
    std::vector <int> vectortest1d {10,20};
    std::vector <std::vector<int>> vectortest2d {
        {10, 20},
        {10, 20}
    };
    udemytut1 vectors;
    QCOMPARE(vectors.udvectortut1d(10,20),vectortest1d); //test case of 1d vector
    QCOMPARE(vectors.udvectortut2d(vectortest1d, vectortest1d),vectortest2d); //test case for 2d vector
}


void Qtestudemy::test_case_operators_positive()
{
    int input_cents {100};
    std::vector <int> xpected_out {1,0,0,0,0};
    udemytut2 tester {input_cents};
    QCOMPARE(tester.change_for_cents(), xpected_out);
}

void Qtestudemy::test_case_operators_negative()
{
    int input_cents = -100;
    std::vector<int> xpected_out = {0,0,0,0,0};
    udemytut2 tester2 {input_cents};
    QCOMPARE(tester2.change_for_cents(), xpected_out);
}

void Qtestudemy::test_case_operators_zero()
{
    int input_cents = 0;
    std::vector<int> xpected_out = {0,0,0,0,0};
    udemytut2 tester3 {input_cents};
    QCOMPARE(tester3.change_for_cents(), xpected_out);
}


void Qtestudemy::test_case_pointers_init(){
    udemypointerchallenge arraycreator;
}

void Qtestudemy::test_case_pointers_arraycreator(){
    int array1[] = {1,-2,1};
    int array2[] = {4,5,6};
    int result[] = {4,-8,4,5,-10,5,6,-12,6};
    size_t array1size {3};
    size_t array2size {3};
    udemypointerchallenge arraycreator;
    for(size_t i=0;i<array1size*array2size;i++){ // comparing arrays
    QCOMPARE(*((arraycreator.getnewarray(array1,array1size,array2,array2size))+i),*(result+i));
    }
}

void Qtestudemy::test_case_operatoroverloading_mystring_empty(){ //mystring class no args constructor test
    MyString operatoroverloading;
    std::ostringstream out;
    operatoroverloading.display(out);
    QCOMPARE(out.str(),"\n");
    QCOMPARE(operatoroverloading.getlength(),0);
    QCOMPARE(operatoroverloading.getmystring(),"\0");
}

void Qtestudemy::test_case_operatoroverloading_mystring_normal(){ //mystring class overloaded constructor test
    MyString operatoroverloading{"Helo"};
    std::ostringstream out;
    operatoroverloading.display(out);
    QCOMPARE(out.str(),"Helo\n");
    QCOMPARE(operatoroverloading.getlength(),4);
    QCOMPARE(operatoroverloading.getmystring(),"Helo");
}

void Qtestudemy::test_case_operatoroverloading_mystring_copy(){ //mystring class copy constructor test
    MyString operatoroverloading{"Helo"};
    MyString operatoroverloading_copy{operatoroverloading};
    std::ostringstream out;
    operatoroverloading_copy.display(out);
    QCOMPARE(out.str(),"Helo\n");
    QCOMPARE(operatoroverloading_copy.getlength(),4);
    QCOMPARE(operatoroverloading_copy.getmystring(),"Helo");
}

void Qtestudemy::test_case_operatoroverloading_assignmentop(){ //assignment operator copy test
    MyString operatoroverloading{"Helo"};
    MyString operatoroverloading_empty;
    MyString operatoroverloading_copy{operatoroverloading_empty};
    operatoroverloading_empty = operatoroverloading;
    operatoroverloading_copy = operatoroverloading;
    QCOMPARE(operatoroverloading_empty.getmystring(),operatoroverloading.getmystring());
    QCOMPARE(operatoroverloading_copy.getmystring(),operatoroverloading.getmystring());

}

void Qtestudemy::test_case_operatoroverloading_moveop(){ //assignmet operator overload move test
    MyString operatoroverloading{"Hello Move Constructor"};
    operatoroverloading = MyString {"testing"};
    QCOMPARE(operatoroverloading.getmystring(),"testing");
    operatoroverloading = "Hello move 2";
   }
void Qtestudemy::test_case_operatoroverloading_negationop(){ //negation test
    MyString objectfornegation1{"HELLO OBJECT FOR NEGATION"};
    MyString negatedobject1 = -objectfornegation1;
    QCOMPARE(negatedobject1.getmystring(),"hello object for negation");
   }
void Qtestudemy::test_case_operatoroverloading_negationemptystringcase(){ //edge case empty string test
    MyString objectfornegation2;
    MyString negatedobject2 = -objectfornegation2;
    QCOMPARE(negatedobject2.getmystring(),"");
    }
void Qtestudemy::test_case_operatoroverloading_negationmixedcase(){ //mixed case test
    MyString objectfornegation3{"Hello"};
    MyString negatedobject3 = -objectfornegation3;
    QCOMPARE(negatedobject3.getmystring(),"hello");
}

void Qtestudemy::test_case_operatoroverloading_additionop(){ //normal test case
    MyString objectforconcatanation{"Hello1 Hello2"};
    MyString concatenated = objectforconcatanation + objectforconcatanation;
    QCOMPARE(concatenated.getmystring(),"Hello1 Hello2Hello1 Hello2");
}

void Qtestudemy::test_case_operatoroverloading_additionop_empty(){ //empty case test
    MyString objectforconcatanation;
    MyString object2forconcatanation{""};
    MyString object3forconcatanation{"hi there"};
    MyString concatenated = objectforconcatanation + object2forconcatanation + object3forconcatanation;
    QCOMPARE(concatenated.getmystring(),"hi there");
}

QTEST_MAIN(Qtestudemy)

#include "tst_qtestudemy.moc"
