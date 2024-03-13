/*
 * I will
 * Keep
 * Myself
 * Safe
 * <3
 */

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using std::string;

struct Reminder{
	string title;
	std::unordered_map<string, std::vector<string>> contents;
};

std::vector<string> get_keys(Reminder r){
	std::vector<string> keys;
	for(const auto& pair : r.contents){
		keys.push_back(pair.first);
	}
	return keys;
}

void printout(Reminder r){
	for(auto& pair : r.contents){
		std::cout<<pair.first<<"\n";
		for(string el : pair.second){
			std::cout<<"\t"<<el<<"\n";
		}
	}
}
