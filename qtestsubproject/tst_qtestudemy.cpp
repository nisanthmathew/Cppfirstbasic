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

private:
    udemytut1 test;

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};


Qtestudemy::Qtestudemy()
{

}

Qtestudemy::~Qtestudemy()
{

}

void Qtestudemy::initTestCase()
{

}

void Qtestudemy::cleanupTestCase()
{

}

void Qtestudemy::test_case1()
{

    QCOMPARE(test.myCondition(),true);
}

QTEST_MAIN(Qtestudemy)

#include "tst_qtestudemy.moc"
