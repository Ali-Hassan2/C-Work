#include<iostream>
using namespace std;
int main(){
	int temp=1;
	for(int i=1;i<=5;i++){
		for(int x=1;x<=6;x++){
			if(x<=i){
				cout<<temp<<" ";
				temp++;
			}
		 	else{
		 		cout<<"* ";
			}			
		}
		cout<<endl;
	}
	
	
	
	
	system("pause");
	return 0;
}