/*
 * This will be my attempt to rework the classic autobus in c++
 */

#include <iostream>
#include <random>
#include <vector>
#include <chrono>

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count(); //quick-updating seed
std::mt19937 random_gen(seed); //pseudo random system using a random seed	
std::uniform_int_distribution<int> ranges(-10,10); //range dist, could be float by using "real"

struct Bus{
	int capacity = -1; int stops = -1; int current_passengers = 0;

	public:
		Bus(int new_capacity, int new_stops){
			capacity = new_capacity;
			stops = new_stops;
		}
		
		void move_people(int n_people){
			if(current_passengers + n_people >= 0 && current_passengers + n_people <= capacity){
				current_passengers += n_people;
			}
			if(current_passengers + n_people > capacity){current_passengers = capacity;}
			if(current_passengers + n_people < 0){current_passengers = 0;}
		}
};

std::vector<Bus> bus_station = {Bus(50,10), Bus(75,15), Bus(25,5)};

int main(){

	for(Bus bus : bus_station){
		for(int stop = 1; stop <= bus.stops;stop++){
			int n_people = ranges(random_gen);
			std::printf("Current stop: %d -> passengers: %d",stop, bus.current_passengers);
			std::cout<<std::endl;
			bus.move_people(n_people);
		}
		std::cout<<"###################"<<std::endl;
	}

	return 0;
}
