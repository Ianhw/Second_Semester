#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <chrono>
using namespace std;

class cardio
{
private:
	string exerciseName;
	

public:


	void workout();
	void workouttips();
	void breathingtips();
	void CardioMenu();
	int completedlightworkout = 0;
	int completedheavyworkout = 0;
	int Running = 15;
	int Runningcount = 6;

};