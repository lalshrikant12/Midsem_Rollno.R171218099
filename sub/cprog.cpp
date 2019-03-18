#inlude<iostream>
using namespace std;
class calcu
{public int a,b,op;
	void sum(int x,int y)
	{x=a,y=b
		cout<<"enter a="<<a<<"enter b"<<b;
		sum=a+b;
	}
	void diff(int x,int y)
	{x=a,y=b;
		cout<<"enter a="<<a<<"enter b"<<b;
		diff=a-b;
		cout<<diff;
	}	void multiply(int x,int y)
	{x=a,y=b;
		cout<<"enter a="<<a<<"enter b"<<b;

		mul=a*b;
		cout<<multiply;
	}
	void divide(int x,int y)
	{x=a,y=b
		 cout<<"enter a="<<a<<"enter b"<<b;

		 divide=a/b;
		 cout<<divide;
	}
}; //class created
int main()
{
    cout << "Enter operator either + or - or * or /: ";
   in >> op;

    

    switch(op)
    {
        case 'add':
            cout << num1+num2;
            break;

        case diff':
            cout << num1-num2;
            break;

        case 'multiply':
            cout << num1*num2;
            break;

        case 'divide':
            cout << num1/num2;
            break;

        default:
            
            cout << "Error! operator is not correct";
            break;
    }

    return 0;   //main function created 
}
