#ifndef TEMPERATURE_CONTROLLER_H
#define TEMPERATURE_CONTROLLER_H

class TemperatureController{
public:
	TemperatureController();
	void enable();
	void disable();
	void setTarget(float temperature);

	// read functions
	float readTemperature() const;
	bool isEnabled() const;
	bool hasFault() const;
	
	// simulate time passing
	void update();
private:
	float currentTemp;
	float targetTemp;
	bool enabled;
	bool fault;

	// constexpr means the value is known at compile time to optimise better.
	// enforces that the value cannot change
	static constexpr float MIN_TEMP = -40.0f;
	static constexpr float MAX_TEMP = 85.0f;
};

#endif
