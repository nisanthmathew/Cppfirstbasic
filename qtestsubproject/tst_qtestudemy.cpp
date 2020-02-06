#include <QtTest>
#include <QCoreApplication>

// add necessary includes here
#include "udemytut1.h"
class Qtestudemy : public QObject
{
    Q_OBJECT

public:
    Qtestudemy();
    ~Qtestudemy();

private slots:

    void test_caseudvector();

};


Qtestudemy::Qtestudemy()
{

}

Qtestudemy::~Qtestudemy()
{

}


void Qtestudemy::test_caseudvector()
{
    std::vector <int> vectortest1d {10,20};
    std::vector <std::vector<int>> vectortest2d {
        {10, 20},
        {10, 20}
    };
    udemytut1 test;
    QCOMPARE(test.udvectortut1d(10,20),vectortest1d); //test case of 1d vector
    QCOMPARE(test.udvectortut2d(vectortest1d, vectortest1d),vectortest2d); //test case for 2d vector
}



QTEST_MAIN(Qtestudemy)

#include "tst_qtestudemy.moc"
