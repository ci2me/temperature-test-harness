#include <iostream>
#include "TemperatureController.h"

int main() {
	TemperatureController controller;

	controller.enable();
	controller.setTarget(34.0f);

	for(int i = 0; i < 15; i++){
		controller.update();
		std::cout << "Temperature: " << controller.readTemperature() << " degrees celsius" << std::endl;
	}
	return 0;
}
