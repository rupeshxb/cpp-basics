#include<iostream>
using namespace std;


	// Matrix multiplication using multidimensional array

int main(){
	int i,j,row1,col1,row2,col2;
	cout<<"Enter the size of matrix. \n";
	cout<<"Enter the number of row and column. \n";
	cin>>row>>col;
	i=row-1;
	j=col-1;
	
	
//	Array declaration with size
	int m1[i][j];
	int m2[i][j];
	int product[i][j];
	
//	To enter elements of first matrix m1
	
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			cout<<"Enter ("<<i+1<<","<<j+1<<") element of first matrix. \n";
			cin>>m1[i][j];
		}
	}
	
//	To enter elements of second matrix m2
	
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			cout<<"Enter ("<<i+1<<","<<j+1<<") element of second matrix. \n";
			cin>>m2[i][j];
		}
	}
}