#pragma once
#include<string>

using namespace std;

class question {

public:
	string prompt;
	string answer;

	question(){}
	~question(){}

	question(string pro, string an)
		:prompt(pro), answer(an) {

	}
};