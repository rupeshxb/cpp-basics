#include<iostream>
using namespace std;

// Finding transpose of matrix : exchanging rows and columns i.e. i and j

int main(){
	int i,j,col,row;
	cout<<"Enter the number of row and column. \n";
	cin>>row>>col;
	i=row;
	j=col;
	
/*  Array declaration with size. Declaration was done here to prevent segmentation fault */

	int m[i][j];
	int t[j][i];
	
//	To enter elements of matrix m and store in corresponding position of transpose matrix
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<endl<<"Enter ("<<i+1<<","<<j+1<<") element of first matrix. \n";
			cin>>m[i][j];
			t[j][i]=m[i][j];
		}
	}
	
//  To display elements of transpose of matrix m
	cout<<endl<<"Displaying all elements of transpose matrix: \n";
	for(j=0;j<col;j++)
	{
		for(i=0;i<row;i++)
		{
			t[j][i];
			cout<<"Transpose element t"<<j+1<<i+1<<": "<<t[j][i]<<endl;
		}
	}
	
// to display in rectangular format

	cout<<endl<<"In rectangular format: \n";
	for(j=0;j<col;j++)
	{
		for(i=0;i<row;i++)
		{
			cout<<t[j][i]<<" ";
			if(i==row-1){
				cout<<endl;
			}
		}
	}
	
	return 0;
	
}