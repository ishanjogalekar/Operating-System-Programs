
#include<bits/stdc++.h>
using namespace std;


int pageFaults(int pages[], int n, int capacity)
{
    unordered_set<int> s;
    unordered_map<int, int> indexes;
    int page_faults = 0;
	for (int i=0; i<n; i++)
	{
        if (s.size() < capacity)
		{
            if (s.find(pages[i])==s.end())
			{
				s.insert(pages[i]);
                page_faults++;
			}
            indexes[pages[i]] = i;
		}
        else
		{
			
			if (s.find(pages[i]) == s.end())
			{
                int lru = INT_MAX, val;
				for (auto it=s.begin(); it!=s.end(); it++)
				{
					if (indexes[*it] < lru)
					{
						lru = indexes[*it];
						val = *it;
					}
				}
                s.erase(val);
                s.insert(pages[i]);
                page_faults++;
			}
            indexes[pages[i]] = i;
		}
	}
    return page_faults;
}


int main()
{
    cout << "\nAlgorithm = LRU ";
    cout<<"\n 19BCE2250 - Ishan Jogalekar";
	int pg[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
	int n = sizeof(pg)/sizeof(pg[0]);
    cout << "\nReferece Pages = ";
    cout << "{";
    for(int i = 0; i < n; i++) {
        cout << pg[i];  
        cout << ", ";
    }
    cout << "}";
	int capacity = 4;
    cout <<"\nPage Faults : ";
	cout << pageFaults(pg, n, capacity);
	return 0;
}
