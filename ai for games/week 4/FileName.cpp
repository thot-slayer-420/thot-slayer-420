#include <iostream>
using namespace std;


/*task1*/

class search_array {
private:
	int array[10];

public: 
	search_array() { read(); }

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

	int linear(int n)
	{
		bool found = false;
		for (int i = 0; i < 10; ++i)
		{
			if (array[i] == n)
			{
				found = true;
				cout << "The number was found position " << i << "with " << i << "steps\n";
				return n;
			}
		}
		if (!found)
		{
			return 0;
		}
	}

	int binary(int n)
	{
		bubble();
		cout << "The array has been sorted before searching\n";

			
		int min = 0;
		int mid = 4;
		int max = 9;
		bool found = false;
		int steps = 0;
		while (!found)
		{
			++steps;
			if (array[mid] == n || array[min] == n || array[max] == n)
			{
				cout << "the number was found in " << steps << " steps\n";
				return n;
			}
			else if (mid == max || mid == min)
			{
				return 0;
			}
			else if (n < array[mid])
			{
				max = mid;
				mid = (min + max) / 2;
			}
			else
			{
				min = mid;
				mid = (min + max) / 2;
			}
		}
	}
};


int main() {

	search_array my_array;
	int output = my_array.binary(6);


	return 0;
}


