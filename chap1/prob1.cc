#include <iostream>
#include <vector>
#include <string> 
#include <map>

using namespace std;

bool isUnique(string str)
{
	map<char,int> m_occurence;

	for(char ch:str){
		if(m_occurence[ch] == 0 )
			m_occurence[ch]++;
		else
			return false;
	}
	return true;
}


int main()
{
	string str="Helo" ;
	if(isUnique(str))
		cout<<"The string is unique "<< endl;
	else
		cout<<"The string provided does not contain unique character ----" << endl;





	return 0;
}
