#include<iostream>

using namespace std;

int power(int input){
int result =1 ;
	for(int i=0;i<input;i++) result *= 2;
return result;
}

int bina(string input){
int result =0;
	for(int i=0;i<input.size();i++){
		if( input[input.size()-1-i] == '1') result += power(i);	
	}
return result;
}


int main(){
	int loop;
	cin >> loop;
	string s1,s2;
	for(int i=0;i<loop;i++){
		cin >> s1 >> s2;
		int i1=bina(s1) , i2=bina(s2);
		int mina = (i1<i2)?i1:i2;
		int a;
			for(a=2;a<mina;a++){
				if(i1%a==0 && i2%a==0) break;	
			}
		
		if(a==mina && s1!=s2) cout <<"Pair #"<<(i+1)<<": Love is not all you need!";
		else cout <<"Pair #"<<(i+1)<< ": All you need is love!";
		cout << endl;
	}
}
