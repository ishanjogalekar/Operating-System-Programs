#include <bits/stdc++.h> 
#include <string>
#include <iostream>
using namespace std;

 

int pageFaults (int pages[], int n, int capacity) 
{
    unordered_set <int> s;
    queue <int> indexes;
    int page_faults = 0;
    for(int i = 0; i < n; i++)
    {
        if(s.size () < capacity) { 
            if(s.find (pages[i]) == s.end ()) {
                s.insert (pages[i]);
	        page_faults++;
	        indexes.push (pages[i]);
            }
       }
       else {
           if(s.find (pages[i]) == s.end ()) {
           int val = indexes.front ();
           indexes.pop ();
           s.erase (val);
           s.insert (pages[i]);
           indexes.push (pages[i]);
           page_faults++;
           }
       } 
    } 
    return page_faults;
}


int main() {
    cout << "Algorithm = FIFO \n";
    cout<<"\n 19BCE2250 - Ishan Jogalekar";
    int pages[] = { 3, 2, 6, 3, 3, 1, 7, 3, 4, 2, 1, 0, 2};
    int n = sizeof(pages) /   sizeof(pages[0]);
    int capacity = 7;
    
    cout << "\nReferece Pages = ";
    cout << "{";
    for(int i = 0; i < n; i++) {
        cout << pages[i];  cout << ", ";
    }
    cout << "}";
    cout << "\nNumber of Page Faults: ";
    cout << pageFaults (pages, n, capacity);
    return 0;
}