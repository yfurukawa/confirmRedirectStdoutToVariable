/*
 * CWorkerTest.cpp
 *
 *  Created on: 2013/09/30
 *      Author: M825504
 */

#include <iostream>
#include <string>

#include "CWorkerTest.h"
#include "mocks/CWorkerSpy.h"

CWorkerTest::CWorkerTest() {
	// TODO 自動生成されたコンストラクター・スタブ

}

CWorkerTest::~CWorkerTest() {
	// TODO Auto-generated destructor stub
}

TEST(CWorkerTest, testOutput) {
	CWorkerSpy spy;
	EXPECT_EQ("Hello World!\n", spy.output());
}
