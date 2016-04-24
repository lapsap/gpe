#include<iostream>
#include<stack>

using namespace std;

int main()
{
int round;
cin >> round;
for(int r=0;r<round;r++){
	int N,n,total;
	cin >> N >> n;
	int data[n];
	for(int i=0;i<n;i++) cin >> data[i];
	total = 0;
	for(int i=0;i<N;i++){
		for(int a=0;a<n;a++){
			if( (i+1)%data[a]==0 && (i+1)%7!=6 && (i+1)%7!=0) {
				total++;
				break;
			}		
		}
	}
	cout <<  total << endl;
}


}	
