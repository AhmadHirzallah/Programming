#include <iostream>

using namespace std;

class cls_person
{
	public:
		soso
		string	first_name;
		string	last_name;
		string	full_name ()
		{
			return (first_name + " " + last_name);
		}

};

int	main (void)
{
	cls_person	person1;

	person1.first_name = "Ahmad";
	person1.last_name = "Hirzallah";
	cout << person1.full_name() << endl;
	return(0);
}
