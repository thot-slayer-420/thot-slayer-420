#include <iostream>
using namespace std;


/*task1*/

class search_array {
private:
	int array[10];

public: 
	search_array() { read(); bubble(); }

	void read()
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "\nEnter a number:";
			cin >> array[i];
		}
	}

	void print() 
	{
		cout << "All the items in the list:\n";
		for (int i = 0; i < 10; i++)
		{
			cout << array[i] << " ";
		}
	}

	void bubble()
	{
		bool sorted = false;
		int items_need_sorting = 10;
		while (!sorted)
		{
			bool items_swapped = false;
			for (int i = 0; i < items_need_sorting - 1; i++)
			{
				int temp;
				if (array[i] > array[i + 1])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					items_swapped = true;
				}
			}
			items_need_sorting--;

			//exits the while loop if no changes were made during a loop through the list
			if (!items_swapped)
			{
				sorted = true;
			}
		}

		// shows the result of the sort
		print();
	}
};


int main() {

	search_array my_array;



	return 0;
}


