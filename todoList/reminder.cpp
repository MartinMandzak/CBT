/*
 * I will
 * Keep
 * Myself
 * Safe
 * <3
 */

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
