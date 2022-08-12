#include<iostream>
#include<cmath>

//<math.h> can also be used instead of <cmath>

using namespace std;

int main(){
	int n, i, total=0;
	float avg, sd;
	cout<<"Total number of elements in array. \n";
	cin>>n;
	cout<<"There are "<< n <<" observable data. \n";
	i = n - 1;
	int data[i]; // declaration of array of data done here to prevent segmentation fault
	
//	Storing user-input data and finding total
	for(i=0;i<n;i++)
	{
		cin>>data[i];
		total +=data[i];
	}
	
	avg = (float)total/n; // mean of data
	cout<<"The average or mean of all data is:"<< avg;
	
	int diff_from_mean[i]; // stores (each element of array-mean)
	int sq_of_diff[i]; // stores square of diff_from_mean
	
/*	 
	standard deviation = sqrt(summation/n)
	summation = sum of all square_of_diff[i]
	square_of_diff[i] = square of (each element of array-avg) 
	diff_from_mean[i] = (each element of array - avg) 
*/
	
	
	for(i=0;i<n;i++)
	{
		diff_from_mean[i] = data[i]-avg;
		sq_of_diff[i] = pow(diff_from_mean[i],2);
	}
	
	int summation;
	for(i=0;i<n;i++){
		summation += sq_of_diff[i];
	}
	
	sd = sqrt(summation/n);
	
	// pow(summation/n,0.5) also works but pow(summation/n,1/2) doesn't work
	
	cout<<"The standard deviation is:"<<sd;
	return 0;
}