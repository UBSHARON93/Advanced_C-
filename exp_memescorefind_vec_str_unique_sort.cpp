#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
	//create the string
	string meme = "nyan cat";

	//find the length of string
	int length = meme.length();
	int s = 0;

	//remove spaces - use remove_if
	remove_if(meme.begin(), meme.end(), isspace);
	//sort it 
	sort(meme.begin(), meme.end());
	// Using unique() method 
	auto res = std::unique(meme.begin(), meme.end());
	
	//create new string or second method is to erase the elemetns after res, only works
	string newstr = string(meme.begin(), res);
	meme.erase(res, meme.end());
	
	vector<char> v(meme.begin(), meme.end());
	for (int i = 0; i < v.size(); i++)
	{
		s += v[i];
	}

	s = s % length;
	cout <<s <<"/" <<10<<endl;

	cin.get();

	// Write an answer using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;


}