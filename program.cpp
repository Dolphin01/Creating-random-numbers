#include <bits/stdc++.h>
using namespace std;
int x,y,n;
void input(){
	cout<<"Please type in the range(min)";
	cin>>x;
	cout<<"Please type in the range(max)";
	cin>>y;
	cout<<"Times:";
	cin>>n;
}
void create(int x,int y){
	cout<<rand()%(y-x+1)+x<<endl;
}
int main(){
	srand((unsigned)time(NULL));
	input();
	while(n--) create(x,y);
	return 0;
}
