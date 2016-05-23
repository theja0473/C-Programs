


	#include<iostream>
	#include<cstring>
	using namespace std;

	class Parent
	{
		private:
			char name1[20];
		public:
			Parent(char *n2)
			{
				strcpy(name1, n2);
				cout<<name1<<" got born as parent...\n";
			}

			~Parent()
			{
				cout<<name1<<" got dead....\n";
			}

	};

	class Child : public Parent
	{
		private:
			char name[20];

		public:
			Child(char *n1, char *n2) : Parent(n2)
			{
				strcpy(name, n1);
				cout<<name<<" got born as child...\n";
			}


			~Child()
			{
				cout<<name<<" got dead...\n";
			}

	};


	int main()
	{
		

		{
			 cout<<"Chennai...\n";

			 Child c1("Vinoth", "Mohan");

		 	
		}
 



		{

			cout<<"Banglore...\n";

			Parent p1("Elavarasan");


		}



		return 0;
	}
