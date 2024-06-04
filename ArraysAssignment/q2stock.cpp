#include<iostream>
using namespace std;

// added void return type and parameter types for setZero function
void setZero(int a[],int n)
{
	for(int i=0; i<n; i++)
	    a[i]=0;
}

// added void return type and parameter type for inputArray function
void inputArray(int alpha[])
{
	cout<<"enter 20 numbers:";
	for(int i=0;i<20;i++)
		cin>> alpha[i];
}

// added void return type and fixed the parameter type for doubleArray function
void doubleArray(int beta[],int alpha[])
{
	for(int i=0; i<10;i++)
		beta[i]=2 * alpha[i];
}

// fixed the variable name typo and added semicolon to the end of the line in copyGamma function
void copyGamma(int inStock[][4],int gamma[])
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(i == 0)
				inStock[i][j]=gamma[j];
			else
				inStock[i][j]=3*inStock[i-1][j];
		}
	}
}

// fixed the parameter type for copyAlphaBeta function and added missing variable type
void copyAlphaBeta(int inStock[][4],int alpha[],int beta[])
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(i<5)
				inStock[i][j]=alpha[j];
			else
				inStock[i][j]=beta[j];
		}
	}
}

// fixed the variable name typo and added missing variable type in printArray function
void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(i%15==0)
			cout<<endl;
		cout<<a[i]<<" ";
	}
}

// fixed the parameter type and added semicolon to the end of the line in setlnStock function
void setlnStock(int inStock[][4],int delta[])
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(j==0)
			{
				cout<<"enter the value:";
				cin>>inStock[i][j];
			}
			else
				inStock[i][j]=2*inStock[i][j-1]-delta[j];
		}
	}
}

int main()
{
	// removed the parameter types in function calls inside main
	int a[20];
	setZero(a,20);
	inputArray(a);
	int beta[10];
	doubleArray(beta, a);
	int inStock[10][4];
	int gamma[4] = {1, 2, 3, 4};
	copyGamma(inStock, gamma);
	int alpha[4] = {5, 6, 7, 8};
	copyAlphaBeta(inStock, alpha, beta);
	printArray(a, 20);
	int delta[4] = {9, 10, 11, 12};
	setlnStock(inStock, delta);
	return 0;
}