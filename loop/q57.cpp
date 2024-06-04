#include<iostream>
using namespace std;
int main()
{
	int rows , nrows , pounds;
	 nrows = 6;
	for(rows = 1 ; rows <= nrows ; rows++)
	{
		for (pounds = 1 ; pounds <= nrows - rows ; pounds++)

			cout<<"#";
			
			for (int star = 1 ; star <= 2*rows - 1 ; star++)
			
				if(star == 1 || star == 2*rows-1)
				
				cout<<"*";
			    
			    else
			    
			    	cout<<"#";
				
				for(pounds = 1 ; pounds <= nrows - rows ; pounds++)
				
					cout<<"#";
				cout<<endl;
				
			}
			
			
		
		

	
	
	return(0);
}
