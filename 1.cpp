#include<iostream>
using namespace std;
int onetotwo(int a,int b)
{
	if((a-b)%2==1)
	{
		return (a-1-b)/2;
	}
	else
	{
		return (a-b)/2;
	}

}
int guess(int k)
{
	if (k==1)
	{
		return 0;
	}
	if(k<1)
	{
		return -1;
	}
	if(k>1)
	{
		return 1;
	}
}

int guessNumber(int n) {
	int begin=1;
	int end =n;
	int ret=begin+onetotwo(end,begin);
	while(guess(ret)!=0)
	{
		cout<<"ret is "<<ret<<endl;
		if(guess(ret)<0)
		{
			begin=ret;
		}
		else
		{
			end=ret;
		}
		ret=begin+onetotwo(end,begin);
	}
	return ret;
}


int main()
{
	cout<<guessNumber(4);
	cout<<guessNumber(3);
}

