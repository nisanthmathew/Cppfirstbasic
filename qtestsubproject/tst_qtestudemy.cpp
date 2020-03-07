#include <QtTest>
#include <QCoreApplication>

// add necessary includes here
#include "udemytut1.h"
#include "udemytut2.h"
class Qtestudemy : public QObject
{
    Q_OBJECT

public:
    Qtestudemy();
    ~Qtestudemy();

private slots:

    void test_case_vectors();
    void test_case_operators();

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

void Qtestudemy::test_case_operators()
{
    /*conversion rates
    1 Dollar = 100 cents
    1 quarter = 25 cents
    1 dime = 10 cents
    1 nickel = 5 cents
    1 penny = 1 cent*/

    int input_cents {100};
    std::vector <int> xpected_out {1,0,0,0,0};
    udemytut2 tester {input_cents};
    QCOMPARE(tester.change_for_cents(), xpected_out);

    input_cents = -100;
    xpected_out = {0,0,0,0,0};
    udemytut2 tester2 {input_cents};
    QCOMPARE(tester2.change_for_cents(), xpected_out);

    input_cents = 0;
    xpected_out = {0,0,0,0,0};
    udemytut2 tester3 {input_cents};
    QCOMPARE(tester3.change_for_cents(), xpected_out);

}

QTEST_MAIN(Qtestudemy)

#include "tst_qtestudemy.moc"
