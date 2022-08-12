#include<iostream>
using namespace std;

// Matrix addition using multidimensional array

int main(){
	int i,j,col,row;
	cout<<"Enter the number of row and column. \n";
	cin>>row>>col;
	i=row;
	j=col;
	
//	Array declaration with size
	int m1[i][j];
	int m2[i][j];
	int sum[i][j];
	
//	To enter elements of first matrix m1
//  Here loop runs from 1 to size of row for ease of representation of matrix 
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<"Enter ("<<i+1<<","<<j+1<<") element of first matrix. \n";
			cin>>m1[i][j];
		}
	}
	
//	To enter elements of second matrix m2
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<"Enter ("<<i+1<<","<<j+1<<") element of second matrix. \n";
			cin>>m2[i][j];
		}
	}
	
//  To sum matrix m1 and m2 then print it

	cout<<"The matrix formed after addition is:"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=m1[i][j]+m2[i][j];
			cout<<"("<<i<<","<<j<<") :"<<sum[i][j]<<endl;
		}
	}
	return 0;
}