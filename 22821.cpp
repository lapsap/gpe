#include<iostream>
#include<stack>
using namespace std;

int main(){
int r,c;
while(cin >> r >> c, r!=0) {
char data[r][c];
int mark[r][c];
for(int row=0; row<r ;row++){
	for(int col=0; col<c; col++){
		cin >> data[row][col];
		mark[row][col] = data[row][col];
	}
}

int count = 0;
stack<pair<int, int> > st;
for(int row=0; row<r ;row++){
	for(int col=0; col<c; col++){
		if(data[row][col] == '@'){
			st.push(make_pair(row,col));
			count++;
			data[row][col] = '*';
			while( !st.empty() ) {
				int i=st.top().first, a=st.top().second;
				data[i][a] = '*';
				st.pop();
				if(data[i][a+1]=='@' && (a+1)<c){ data[i][a+1]='*'; st.push(make_pair(i,a+1)); }
				if(data[i][a-1]=='@' && (a-1)>=0){ data[i][a-1]='*'; st.push(make_pair(i,a-1)); }
				if(data[i+1][a]=='@' && (i+1)<r){ data[i+1][a]='*'; st.push(make_pair(i+1,a)); }
				if(data[i-1][a]=='@' && (i-1)>=0){ data[i-1][a]='*'; st.push(make_pair(i-1,a)); }
				if(data[i+1][a+1]=='@' && (i+1)<r && (a+1)<c){ data[i+1][a+1]='*'; st.push(make_pair(i+1,a+1)); }
				if(data[i+1][a-1]=='@' && (i+1)<r && (a-1)>=0){ data[i+1][a-1]='*'; st.push(make_pair(i+1,a-1)); }
				if(data[i-1][a-1]=='@' && (i-1)>=0 && (a-1)>=0){ data[i-1][a-1]='*'; st.push(make_pair(i-1,a-1)); }
				if(data[i-1][a+1]=='@' && (i-1)>=0 && (a+1)<c){ data[i-1][a+1]='*'; st.push(make_pair(i-1,a+1)); }
			}	
		}
	}
}
cout << count << endl;
}
}
