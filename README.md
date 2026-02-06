# Temperature Controller Test Harness

This project is a small C++ test harness to simulate and test the behaviour of a temperature controller device. The main aim of this project is to practice and demonstrate basic object-oriented design and automated testing concepts in C++.

## Overview
The three main sections of the project are as follows:
1. **Temperature Controller**
   A simple simulated device to model temperature behaviour, target tracking, and fault conditions.

2. **Test Framework**
   A test harness using inheritance and polymorphism, where each test is derived froma common TestCase interface.

3. **Automated Tests**
   Test cases to verify correct behaviour, such as reaching the target temperature and detecting faults caused by overheating.

## Building and Running
This project was built using g++ on a Linux environment.
To build and run, navigate to the project root:

```
g++ tests/test_main.cpp src/TempController.cpp -Iinclude -o run_tests
./run_tests
```
