#include<iostream>
#include<list>
using namespace std;

#define SIZE 10
int main(){
	int keys[]={25,35,15,42};
	int n=4;
	 
	 //Seperate Chaining
	 list <int> chainTable[SIZE];
	 
	 //Linear Probing
	 int probeTable[SIZE];
	 for(int i=0;i<SIZE;i++)
	 	probeTable[i]=-1;
	 	
	//Insert into both tables
	 for(int i=0;i<n;i++){
	 	int key=keys[i];
	 	int index=key%SIZE;
	 	
	 	//Seperate chaining
	 	chainTable[index].push_back(key);
	 	
	 	//Linear Probing
	 	int pos=index;
	 	while(probeTable[pos]!=-1)
	 	pos=(pos+1)%SIZE;
	 	probeTable[pos]=key;
	 }
	 
	 //Dispaly Seperate Chaining
	 cout<<"Seperate Chaining:\n";
	 for(int i=0;i<SIZE;i++)
	 {
	 	cout<<i<<"-->";
	 	for(int x:chainTable[i])
	 	cout<<x<<"->";
	 	cout<<"NULL\n";
	 }
	 
	 //Displaying Linear Probing
	 cout<<"\nLinear Probing\n";
	 for(int i=0; i<SIZE;i++)
	 {
	 	cout<<i<<"-->";
	 	if(probeTable[i]==-1)
		 cout<<"NULL";
		else
		  cout<<probeTable[i];
		cout<<endl;	 
	 	}
	 	return 0;
		 	 	
	}
