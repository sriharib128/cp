#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{	
		// cout<<"hi"<<" ";
		long long int X,B;
		cin>>X>>B;
		// cout<<"hi"<<" ";
		long long int D[B+1][2];//dish==>dist,people_Required
		// cout<<"hi "<<endl;
		for(int i=1;i<=B;i++)
		{
			cin>>D[i][0]>>D[i][1];
			// cout<<D[i][0]<<" "<<D[i][1]<<endl;
		}
		
		long long int C;
		cin>>C;
		long long int T[C+1][3]={};//Tribe==>dist,people_required,Population
		for(int i=1;i<=C;i++)
			cin>>T[i][0]>>T[i][1]>>T[i][2];
		long long int t_b = B;
		long long int t_c = C;
		long long int people = 1;
		
		while(t_b>0 && t_c>0)
		{	
			if(D[t_b][0]<T[t_c][0])// we are ahead of a clan and we need to find people required before the clan
			{	
				long long int before_clan;
				if(T[t_c][1]+T[t_c][2]>= people)
					before_clan = T[t_c][1];
				else
					before_clan= people - T[t_c][2];
					//before_clan = T[t_c][1] + {people-T[t_c][1]-T[t_c][2]+1}

				if(people > before_clan )
					people = before_clan;
				t_c--;
			}		
			else // we are ahead of a dish and we need to find people required before the dish
			{
				people +=D[t_b][1];
				t_b--;
			}
		}
		while(t_b>0)
		{
			people +=D[t_b][1];
			t_b--;
		}
		cout<<people<<endl;;
	}
	return 0;
}
/*
//decide whether to add the tribal clan or not
long long int after_clan =people;
case 1 :
	T[t_c][1]+T[t_c][2]-1 >= people
	before_clan = T[t_c][1] 
case 2 :
	T[t_c][1]+T[t_c][2]-1 < people
	before_clan = T[t_c][1] + {people-T[t_c][1]-T[t_c][2]+1}
				= people - T[t_c][2]+1;
case 3:(not including clan)
	no_clan = people

//people = min(no_clan,before_clan);
*/