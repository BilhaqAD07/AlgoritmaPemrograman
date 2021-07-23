#include <iostream>
#include<string>
using namespace std;


void tukerstring(string *x, string *y)
{
	string temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void tukerint(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void sortint(int *data, int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = size-1; j > i; j--)
		{
			if(data[j] > data[j-1])
				tukerint(&data[j-1], &data[j]);
		}
	}
}

void sortstring(string *data, int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = size-1; j > i; j--)
		{
			if(data[j] < data[j-1])
				tukerstring(&data[j-1], &data[j]);
		}
	}
}

int main()
{
	int N;
    int Dataint = 0, Datastring = 0;
	
    cin >> N;
	if(N <= 0)
    {
        cout << "Error";
        exit(0);
    }
	string inputstring[N];
	int inputint[N];
	string input;
	for (int i = 0; i < N; ++i)
	{
		cin >> input;
		int ascii = int(input[0]);
		if(ascii == 45 || ascii == 48){
            cout << "Error";
            exit(0);
        }
		else if(ascii >= 48 && ascii <= 57)
		{
			inputint[Dataint] = atoi(input.c_str());
			Dataint++;
		}else{
			inputstring[Datastring] = input;
			Datastring++;
		}
	}

	sortint(inputint, Dataint);
	sortstring(inputstring, Datastring);
	if(N % 2 != 0)
	{	
		for (int i = 0; i < Dataint; ++i)
			cout << inputint[i] << endl;

		for (int i = 0; i < Datastring; ++i)
			cout << inputstring[i] << endl;
	}else{
		for (int i = 0; i < Datastring; ++i)
			cout << inputstring[i] << endl;
		
		for (int i = 0; i < Dataint; ++i)
			cout << inputint[i] << endl;
	}

}