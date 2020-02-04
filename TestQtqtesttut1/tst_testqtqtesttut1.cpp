#include <QtTest>

// add necessary includes here

class TestQtqtesttut1 : public QObject
{
    Q_OBJECT

public:
    TestQtqtesttut1();
    ~TestQtqtesttut1();

private slots:
    void test_case1();

};

TestQtqtesttut1::TestQtqtesttut1()
{

}

TestQtqtesttut1::~TestQtqtesttut1()
{

}

void TestQtqtesttut1::test_case1()
{

}

QTEST_APPLESS_MAIN(TestQtqtesttut1)

#include "tst_testqtqtesttut1.moc"
