


#include "reminder.h"

int main(){
	Reminder testing;

	testing.contents["hello"].push_back("aloo");
	testing.contents["aloo"].push_back("hello");
	printout(testing);
	return 0;
}
