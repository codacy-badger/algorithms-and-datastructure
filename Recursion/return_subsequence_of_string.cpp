/*
   Program to return all the subsequence of a string.
   A String is a subsequence of a given String, that is generated by deleting
   some character of a given string without changing its order.
 */

#include <iostream>
#include <cmath>
using namespace std;

int subs(string input, string output[]){        //Output array of string
	if(input.empty()) {
		output[0] = "";
		return 1;
	}
	string smallString = input.substr(1);
	int smallOutputSize = subs(smallString, output);
	for(int i = 0; i < smallOutputSize; i++) {
		output[i + smallOutputSize] = input[0] + output[i];
	}
	return 2 * smallOutputSize;
}

int main(){
	string input;
	cin >> input;
	int size = pow(2, input.length());
	string* output = new string[size];
	int count = subs(input, output);
	for(int i = 0; i < count; i++ ) {
		cout << output[i] << endl;
	}
}

/*
   abcd

   d
   c
   cd
   b
   bd
   bc
   bcd
   a
   ad
   ac
   acd
   ab
   abd
   abc
   abcd
 */