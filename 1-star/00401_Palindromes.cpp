#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	
	string line;
	int left, right;
	bool palindrome, mirrored;
	map<char, char> data{
		{'A', 'A'},
		{'E', '3'},
		{'H', 'H'},
		{'I', 'I'},
		{'J', 'L'},
		{'L', 'J'},
		{'M', 'M'},
		{'O', 'O'},
		{'S', '2'},
		{'T', 'T'},
		{'U', 'U'},
		{'V', 'V'},
		{'W', 'W'},
		{'X', 'X'},
		{'Y', 'Y'},
		{'Z', '5'},
		{'1', '1'},
		{'2', 'S'},
		{'3', 'E'},
		{'5', 'Z'},
		{'8', '8'}
	};
	
	while(getline(cin, line)){
		left = 0;
		right = line.size() - 1;
		palindrome = true;
		while(left <= right){
			if(line[left] != line[right]){
				palindrome = false;
				break;	
			}
			left++;
			right--;
		}
		left = 0;
		right = line.size() - 1;
		mirrored = true;
		while(left <= right){
			if(data.find(line[left]) != data.end()){
				if(data[line[left]] != line[right]){
					mirrored = false;
					break;	
				}
			}
			left++;
			right--;
		}
		if(palindrome && mirrored){
			cout << line << " -- is a mirrored palindrome." << endl;
		}
		else if(mirrored){
			cout << line << " -- is a mirrored string." << endl;
		}
		else if(palindrome){
			cout << line << " -- is a regular palindrome." << endl;
		}
		else{
			cout << line << " -- is not a palindrome." << endl;
		}
		cout << endl;
	}

	return 0;
}