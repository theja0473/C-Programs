
	#include "Person.h"

	class Employee : private Person
	{		
		private:
			
			int salary;
 
		        char desig[20];	

		public:

			void setEmployee(char *n, int a, char g, int s, char *d)
			{
				setPerson(n, a, g);
			
				salary = s;
				strcpy(desig, d);
			}


			void putEmployee()
			{
				putPerson();

				cout<<"Salary	: "<<salary<<endl;
				cout<<"Designation : "<<desig<<endl;
			}
	};
