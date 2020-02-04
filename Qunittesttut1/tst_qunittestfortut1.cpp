#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class Qunittestfortut1 : public QObject
{
    Q_OBJECT

public:
    Qunittestfortut1();
    ~Qunittestfortut1();

private slots:
    void test_case1();

};

Qunittestfortut1::Qunittestfortut1()
{

}

Qunittestfortut1::~Qunittestfortut1()
{

}

void Qunittestfortut1::test_case1()
{

}

QTEST_MAIN(Qunittestfortut1)

#include "tst_qunittestfortut1.moc"
