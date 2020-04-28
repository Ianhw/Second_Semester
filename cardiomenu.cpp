#include "cardio.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

void cardio::CardioMenu()
{
	system("cls");
	int menucount = 10;
	while (menucount != 100) {
		cout << "Cardio Menu" << endl << endl;
		cout << "What are you wanting to do today?" << endl;
		cout << "1. Work OUT!" << endl;
		cout << "2. Running Tips" << endl;
		cout << "3. Breathing Tips" << endl;
		cout << "Press 0 to go to the main menu" << endl;
		cin >> menucount;

		if (menucount == 1)
		{
			workout();
		}

		if (menucount == 2)
		{
			workouttips();
		}
		if (menucount == 3)
		{
			breathingtips();
		}
	}

}

void cardio::workout() {
	int menucount = 10;
	while (menucount != 100) {
		system("cls");
		cout << "Workout Menu" << endl << endl;
		cout << "1. Running" << endl;
		cout << "2. Light Workout" << endl;
		cout << "3. Heavy Workout" << endl;
		cout << "Press 0 to go to the cardio menu" << endl;
		cin >> menucount;

		if (menucount == 1)
		{
			cout << "This workout will have you run for 2 minutes and walk for one this will go for " << Running << " mintues.  For  Keep runnning till you see the STARS APPEAR ******" << endl;
			cout << "Ready!" << endl;
			sleep_until(system_clock::now() + seconds(1));
			cout << "Set!" << endl;
			sleep_until(system_clock::now() + seconds(1));
			cout << "Go!" << endl;

			for (int i = 0; i < Runningcount; i++) {
				sleep_until(system_clock::now() + seconds(120));
				cout << "***********  WALK ***********  " << endl;
				cout << "***********  WALK ***********  " << endl;
				cout << "***********  WALK ***********  " << endl;
				cout << "***********  WALK ***********  " << endl;
				sleep_until(system_clock::now() + seconds(60));
				cout << "***********  RUN  ***********  " << endl;
				cout << "***********  RUN  ***********  " << endl;
				cout << "***********  RUN  ***********  " << endl;
				cout << "***********  RUN  ***********  " << endl;
			}
			cout << "Good Job you did it!  " << endl;
		}

		if (menucount == 2)
		{
			cout << "This workout will have you run in place for a minute. give a 30 second brake" << endl;
			cout << "then jumping jacks for 1 minute 30 second brake" << endl;
			cout << "then burpies for 30 seconds 30 second brake" << endl;
			cout << "then step lunges for 1 minute 30 second brake" << endl;
			cout << "This will happen 3 times!" << endl;
			cout << "Ready!" << endl;
			sleep_until(system_clock::now() + seconds(1));
			cout << "Set!" << endl;
			sleep_until(system_clock::now() + seconds(1));
			cout << "Go!" << endl;
			for (int i = 0; i < 4; i++) {
				cout << "***********  RUN IN PLACE ***********  " << endl;
				cout << "***********  RUN IN PLACE ***********  " << endl;
				cout << "***********  RUN IN PLACE ***********  " << endl;
				cout << "***********  RUN IN PLACE ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
				cout << "***********  JUMP  ***********  " << endl;
				cout << "***********  JUMP  ***********  " << endl;
				cout << "***********  JUMP  ***********  " << endl;
				cout << "***********  JUMP  ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
				cout << "***********  BURPIE  ***********  " << endl;
				cout << "***********  BURPIE  ***********  " << endl;
				cout << "***********  BURPIE  ***********  " << endl;
				cout << "***********  BURPIE  ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
				cout << "***********  STEP LUNGE ***********  " << endl;
				cout << "***********  STEP LUNGE ***********  " << endl;
				cout << "***********  STEP LUNGE ***********  " << endl;
				cout << "***********  STEP LUNGE ***********  " << endl;
				sleep_until(system_clock::now() + seconds(60));
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
			}
			completedlightworkout = completedlightworkout + 1;
			cout << "Good Job you did it!  " << endl;
		}
		if (menucount == 3)
		{
			system("cls");
			cout << "This is the heavy workout this will be difficult to complete. It is the same as the light but faster and longer." << endl;
			cout << "This workout will have you run in place for two minutes. give a 30 second brake" << endl;
			cout << "then jumping jacks for 1 minute 10 second brake" << endl;
			cout << "then burpies for 1 minute 30 second brake" << endl;
			cout << "then step lunges for 30 minute 10 second brake" << endl;
			cout << "This will happen 3 times!" << endl;
			cout << "Ready!" << endl;
			sleep_until(system_clock::now() + seconds(1));
			cout << "Set!" << endl;
			sleep_until(system_clock::now() + seconds(1));
			cout << "Go!" << endl;
			for (int i = 0; i < 10; i++) {
				cout << "***********  RUN IN PLACE ***********  " << endl;
				cout << "***********  RUN IN PLACE ***********  " << endl;
				cout << "***********  RUN IN PLACE ***********  " << endl;
				cout << "***********  RUN IN PLACE ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
				cout << "***********  JUMP  ***********  " << endl;
				cout << "***********  JUMP  ***********  " << endl;
				cout << "***********  JUMP  ***********  " << endl;
				cout << "***********  JUMP  ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
				cout << "***********  BURPIE  ***********  " << endl;
				cout << "***********  BURPIE  ***********  " << endl;
				cout << "***********  BURPIE  ***********  " << endl;
				cout << "***********  BURPIE  ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
				cout << "***********  STEP LUNGE ***********  " << endl;
				cout << "***********  STEP LUNGE ***********  " << endl;
				cout << "***********  STEP LUNGE ***********  " << endl;
				cout << "***********  STEP LUNGE ***********  " << endl;
				sleep_until(system_clock::now() + seconds(60));
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				cout << "***********  REST ***********  " << endl;
				sleep_until(system_clock::now() + seconds(30));
			}
			completedheavyworkout = completedheavyworkout + 1;
			cout << "Good Job you did it!  " << endl;
		}
	}
	
}

void cardio::workouttips() {
	system("cls");
	cout << "1. Strengthen Your Whole Body" << endl;
	cout << "Good runners condition their whole bodies.The arms drive the legs.Keep your upper body and core toned with a lot of push - ups, pull - ups, sit - ups, and back raises " << endl;
	cout << "(don’t forget that the back is part of the core).Stay away from machine weightsand stick to Pilates, climbing, and dynamic flexibility work like yoga. " << endl;

	cout << "2. Run More Hills " << endl;
	cout << " “One of the beauties of hills is that they really work on dynamic power, hip strength, and hip mobility " << endl;
	cout << "because you need to be able to goand drive those hips really high to get up.” " << endl;

	cout << "3. Hydrate(Especially Before Trail Races) " << endl;
	cout << " “Due to their remote locations, many trail races have few(if any) water stations.Make sure to hydrate for days in advance " << endl;
	cout << " , and—depending on the distance of the race—consider carrying a water bottle or hydration pack during the event.”  " << endl;

	//int tipmenucount = 10;
	//while (tipmenucount != 100) {
		
}

void cardio::breathingtips() {
	system("cls");
	cout << " TIps come from https://www.military.com/military-fitness/workouts/breathing-during-exercise "  << endl;
	cout << "   "<< endl;
	cout << "Many experts will say that to fully oxygenate the musclesand clear the body of carbon dioxide " << endl;
		cout << "you should breathe a 3:2 inhale - to - exhale ratio; full inhalesand full exhales.This means you  " << endl;
		cout << "INHALE on the LEFT, RIGHT, LEFT foot strikesand EXHALE fully on the RIGHT, LEFT foot strikes.This  " << endl;
		cout << "pattern is not that hard to turn into a habit, but it may require you to slow your pace down for a  " << endl;
		cout << "few runs to master the technique.You will notice a lower heart rate as you are able to get more oxygen  " << endl;
		cout << "inand more importantly push all the carbon dioxide out of your body.You may notice that you naturally " << endl;
		cout << "drop to a 2:1 ratio when you are really pushing it to the finish.That is OK.But realize it is difficult " << endl;
		cout << "to maintain a pace that requires you to breathe at a 2 : 1 ratio.The CO2 in your body will increase if  " << endl;
		cout << "your breathing patterns are shortand hurried.This will increase your heart rateand lactic acid   " << endl;
		cout << "production, and decrease your endurance in any cardiovascular event(running, swimming, biking, etc.) " << endl;
}