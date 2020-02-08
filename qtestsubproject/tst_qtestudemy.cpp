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
    udemytut2 operators;
    int input_cents {267};
    QCOMPARE(operators.change_for_cents(input_cents), true);
}

QTEST_MAIN(Qtestudemy)

#include "tst_qtestudemy.moc"
