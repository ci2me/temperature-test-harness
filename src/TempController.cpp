#include "TemperatureController.h"

TemperatureController::TemperatureController()
	: currentTemp(20.0f),
	  targetTemp(20.0f),
	  enabled(false),
	  fault(false) {}

void TemperatureController::enable() {
	if (!fault) enabled = true;
}

void TemperatureController::disable() {
	enabled = false;
}

void TemperatureController::setTarget(float temperature){
	if(temperature < MIN_TEMP || temperature > MAX_TEMP) {
		fault = true;
		enabled = false;
		return;
	}
	targetTemp = temperature;
}

float TemperatureController::readTemperature() const {
	return currentTemp;
}

bool TemperatureController::isEnabled() const {
	return enabled;
}

bool TemperatureController::hasFault() const {
	return fault;
}

void TemperatureController::update() {
	if (!enabled || fault){
		return;
	}

	if(currentTemp < targetTemp){
		currentTemp += 1.0f;
	}
	else if(currentTemp > targetTemp){
		currentTemp -= 1.0f;
	}
}
