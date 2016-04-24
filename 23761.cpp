#include<iostream>

using namespace std;

void fun(string in1, string in2){
	if(in1.size() != in2.size()){
		cout<< "No" << endl;
		return;
	}
	for(int i=0;i<in1.size(); i++){
		if(in1[i]=='a' ||in1[i]=='e' ||in1[i]=='i' ||in1[i]=='o' ||in1[i]=='u')
		   in1[i] = '$';	   
//		else in1[i] = '#';
	if(in2[i]=='a' ||in2[i]=='e' ||in2[i]=='i' ||in2[i]=='o' ||in2[i]=='u')
		   in2[i] = '$';	   
//		else in2[i] = '#';
	}
	if(in1==in2) cout << "Yes\n"; // <<in1 <<" " << in2 << endl;
	else cout << "No\n";
}

int main(){
	int term;
	cin >> term;
	string in1,in2;
	for(int i=0; i<term; i++){
		cin >> in1 >>in2;
		fun(in1,in2);
	}	
}
