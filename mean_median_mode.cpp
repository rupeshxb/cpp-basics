#include<iostream>
using namespace std;

int main()
{
	int n, i, data[100];
	float total, mean;
	
	cout<<"Enter the size of data or number of elements: \n";
	cin>>n;
	
	/* Taking data */
	
	cout<<"Enter the data: \n";
	for(i=0;i<n;i++)
	{
		cin>>data[i];
		total += data[i];
	}
	mean = total/n;
	cout<<"The mean is: "<<mean<<endl;
	
	
	/* Calculation of median starts from here. Median data needs to be sorted. */
	
	float median;
	int j, temp;
	
	/* Sorting in ascending order using for loop */
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++) 
		{
			if(data[i]>data[j]) /* This statement decides if sorting is to be done in ascending or descending */
			{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
			}
		}
	}
	
	/* Displaying the sorted data*/
	
	cout<<"The data sorted in ascending order is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<data[i]<<endl;
	}
	
	
	if(n%2==0) /*for even number of data*/
	{
		median = (data[((n-1)/2)+1] + data[(n-1)/2])/2; 
	}
	else /* for odd number of data*/
	{
		median = data[(n-1)/2];
	}
	
	cout<<"Median is: "<< median<<endl;
	
	/* Calculation of mode starts from here */
	
	int number, mode, count, max=0;
	for(i=0;i<n;i++)
	{
		number = data[i];
		count = 0;       /* Count needs to reset for each data[i] */
		for(j=0;j<n;j++)
		{
			if(number==data[j])
			{
				count++;
			}
			if(count>max)
			{
				max = count;
				if(max == 1)
				{
					mode = data[0];
				}
				else
				{
					mode = number;
				}
			}
		}
	}
	
	cout<<"The mode is:"<<mode<<endl;
	
	return 0;
}