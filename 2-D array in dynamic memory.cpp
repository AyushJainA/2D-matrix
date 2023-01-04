#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

	int row ,col;
	cin>>row>>col;
	
	int *arr=  new int [col];
	
	//creating a 2-d array dynamically 
	int **array= new int *[row]; // Important Line
	for(int i =0;i<row;i++){
		array[i]=new int[col]; 
	}

	//taking input 
	for(int i=0;i<row;i++){
	for(int j=0;j<col;j++) { cin>>array[i][j];
	}	}
	
	//Output
		for(int i=0;i<row;i++){
	for(int j=0;j<col;j++) { cout<<array[i][j]<<" ";
	}cout<<endl;	}
	
	//releasing memory 
		for(int i =0;i<row;i++){
		delete []array[i];
	}

	delete[]array;




return 0;
}


