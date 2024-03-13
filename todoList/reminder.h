#ifndef REMINDER_H
#define REMINDER_H

#include <string>
#include <unordered_map>
#include <vector>

using std::string;

struct Reminder {
    std::string title;
    std::unordered_map<string, std::vector<string>> contents;
};

std::vector<string> get_keys(Reminder r);

void printout(Reminder r);
#endif // REMINDER_H

