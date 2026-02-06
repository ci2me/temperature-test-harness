#include <iostream>
#include <vector>
#include <memory>
#include "TestCase.h"
#include "ReachTargetTest.cpp"
#include "OverheatFaultTest.cpp"
#include "CoolingFaultTest.cpp"

int main(){
	std::vector<std::unique_ptr<TestCase>> tests;
	tests.push_back(std::make_unique<ReachTargetTest>());
	tests.push_back(std::make_unique<OverheatFaultTest>());
	tests.push_back(std::make_unique<CoolingFaultTest>());


	int passed = 0;
	int failed = 0;

	for (const auto& test: tests){
		if(test->run()){
			std::cout << "[PASS]" << test->name() << std::endl;
			passed++;
		}
		else{
			std::cout << "[FAIL]" << test->name() << std::endl;
			failed++;
		}
	}
	std::cout << "------------" << std::endl;
	std::cout << passed << " passed, " << failed << " failed" << std::endl;

	return failed == 0 ? 0 : 1;
}
