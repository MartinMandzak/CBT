/* I'm gonna attempt to make a tokenizer, surely this will go swimmingly */


// IMPORTS
#include <iostream>

//NAMESPACES
using std::string;

struct Token{
	string contents;	
};






//MAIN
int main(){
	string user_input;
	std::cout<<"Hey, give me a sentence! ";
	std::cin>>user_input;
	std::cout<<user_input;
	return 0;
}
