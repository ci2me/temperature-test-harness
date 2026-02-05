#ifndef TEST_CASE_H
#define TEST_CASE_H

#include <string>

class TestCase{
public: 
	virtual ~TestCase() = default;
	virtual bool run() = 0;
	virtual std::string name() const = 0;
};

#endif
