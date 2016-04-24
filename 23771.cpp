#include<iostream>
#include<map>

using namespace std;

long long ex(long long input){
	long long result = 1;
	for(int i=1; i<=input ; i++) result *= i;
	return result;
}

string permute(string input,long long count){
count--;
string result = "";
	for(int i=input.size()-1; i>=0; i--){
		long long tmp = count / ex(i);
		count = count % ex(i);
		result += input[tmp];
		input.erase(tmp,1);
	}
	return result;
}

int main(){
	string input;
	long long count;
	int loop=0;
	cin >> loop;
	char base = 'a';
	
	string *answer = new string[loop];

	for(int i=0;i<loop;i++){
		cin >> input >> count;
		string in = "";
		for(int a=0;a<input.size();a++) in += base +a;
		string tmp = permute(in,count);
		map<char,char> mymap;
		for(int a=0;a<input.size();a++) mymap[tmp[a]] = input[a];
//		cout << "Case " << i << ": ";
//		for(int a=0;a<input.size();a++) cout << mymap[base+a];
		for(int a=0;a<input.size();a++) answer[i] += mymap[base+a];
//		cout << endl;
	}
	for(int i=0;i<loop;i++) cout <<"Case "<<i+1<<": "<< answer[i] << endl;

}
