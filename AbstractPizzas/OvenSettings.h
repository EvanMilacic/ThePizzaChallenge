#pragma once

#include <iostream>
#include <string>

class OvenSettings {

private:
	int Tray_Height;
	int Oven_Time;
	double Temperature;
	std::string BakingProgram;

public:
	OvenSettings() {
		Temperature = 280.;
		Tray_Height = 2;
		Oven_Time = 12;
	};
	OvenSettings(double setTemp) {
		Temperature = setTemp;
		Tray_Height = 2;
		Oven_Time = 12;
	}

	~OvenSettings() {};

	void SetProgram(std::string Prog) {
		BakingProgram = Prog;
	}

	void SetHeight(int height) {
		Tray_Height = height;
	}

	void SetOvenTime(int setTime) {
		Oven_Time = setTime;
	}
	void Print(void) {
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "Oven Settings are:" << std::endl;
		std::cout << "Temperature = " << Temperature << std::endl;
		std::cout << "Tray Height = " << Tray_Height << std::endl;
		std::cout << "Program = " << BakingProgram << std::endl;
		std::cout << "-------------------------------------" << std::endl;
	}
};