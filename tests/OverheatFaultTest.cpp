#include "TestCase.h"
#include "TemperatureController.h"

class OverheatFaultTest : public TestCase {
public:
	bool run() override {
		TemperatureController controller;
		controller.enable();
		controller.setTarget(90.0f);

		for (int i = 0; i < 75; i++){
			controller.update();
		}

		return controller.hasFault();
	}

	std::string name() const override{
		return "OverheatFaultTest";
	}
};
