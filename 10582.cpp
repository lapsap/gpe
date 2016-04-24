#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
	string input;
	while(cin>>input,input!="."){
		int buff = 1, answer = 1;
		string temp = "";
		for(int a=0;a<input.size()-1;a++){
		map<string,int> lmap;
		for(int i=0;i<input.size();i++){
			temp += input[i];
			if( (i+1) % buff == 0){
//				cout << temp << " ";
				lmap[temp]++;
				temp = "";
			}
		}
//			cout << endl;
			//cout << lmap.size() << lmap.begin()->first << endl;	
			if(lmap.size()==1) answer =(answer>lmap.begin()->second)?answer:lmap.begin()->second;
			buff++;
			if( input.size() % buff != 0) break;
		}	
		cout << answer << endl;
	}
}
