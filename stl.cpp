#include<bits/stdc++.h>
#include<vector>
using namespace std;

// c++ STL standard template library 
// C++ STL is divided into 4 parts 
// 1. Algorithm
// 2. Containers  (vector, queue, stack, set)
// 3. Functions
// 4. Iterators

// pair lies inside utility library
void explainPair() {
	pair<int, int> p = {1,3};
	cout<<p.first<<" "<<p.second<<endl;

	// nested pair
	pair<int, pair<int, int>> nestedPair = {1, {2,3}};
	cout<<nestedPair.first<<" "<<nestedPair.second.first<<" "<<nestedPair.second.second<<endl;

	// array of pairs 
	pair<int, int>pairList[] = {{1,2},{3,4}};
	cout<<pairList[0].first<<" "<<pairList[1].second<<endl;
}

// Vector Container Dynamic size
// you can always increase the size of vector
// scenarios when you don't know the size It's recommend to use vector
// vector is implemented using singly linked list
void explainVector() {
	cout<<"\nvector explained"<<endl;
	vector<int> v;

	v.push_back(1);
	v.emplace_back(2);

	vector<pair<int, int>> vec;

	vec.push_back({32,24});

	vector<int> vect(5,10); // creates {10,10,10,10,10}
	vector<int> vecto(5); // create v of size 5 with default value depend on compailer

	vector<int> v1{1,2,3,4,5};
	vector<int> v2(v1); // copy vector v into v2

	cout<<v2[0]<<endl;

	// iterators
	// iterator point to the memory address so to get the value need to use *(it)
	// you need to define iterator of same data type you need to iterate on
	vector<pair<int, int>>::iterator it = vec.begin();
	cout<<it->first<<endl;  // use it->first instead of it.first as it is an pointer to an object

	// in c++ 14 the better way to write this in for loop
	for (const auto& it : vec) {    // auto is the keyword in which you don't need to mentioned data type of iterator
		cout<<it.first<<" ";
	}

	for(vector<int>::iterator it = v2.begin(); it != v2.end(); it++) {
		cout<<*it<<" "; // to value use pointer
	}
	cout<<endl;

	for (auto it = v.begin(); it != v.end(); it++) {
		cout<<*it<<" ";
	}
	cout<<endl;

	// smallest way to write loops in STL
	for(auto it : v1) {
		cout<<it<<" ";
	}

	cout<<endl;

}

void explainList() {
	// list are implement using doubly linked list 
	// diff b/w vector and list is insertion in front take O(1) in list while O(n) in vector
	cout<<"\nLists"<<endl;
	list<int> ls;

	ls.push_back(2);
	ls.push_front(1);

	cout<<ls.front()<<endl; // front of list 
	cout<<ls.back()<<endl;	// back of list
	cout<<endl<<endl;
}

void explainDequeue() {

}

void explainStack() {
	cout<<"\nStack"<<endl;
	stack<int> s;

	s.push(2);
	s.push(3);
	s.push(4);

	cout<<"Top of stack:: "<<s.top()<<endl;

	s.pop(); //poping element from stack
	cout<<"Top of stack after popping:: "<<s.top()<<endl;

	while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout<<endl;
}

void explianPriorityQueue() {
	// always make sure to store element in sorted order 
	// by default it will be max heap
	cout<<"\nPrority Queue"<<endl;

	priority_queue<int> pq;  // max heap

	pq.push(2);
	pq.push(4);
	
	cout<<"Top of max heap "<<pq.top()<<endl;
	pq.pop();

	cout<<"Size of pq "<<pq.size()<<endl;
	cout<<"Is priorityQueue empty? "<<pq.empty()<<endl;

	// min heap 
	priority_queue<int, vector<int>, greater<>> minPQ;

	minPQ.push(3);
	minPQ.push(1);
	cout<<"Top of min heap "<<minPQ.top()<<endl<<endl;
}

void explainDeque() {
    // deque (short for "double-ended queue") is a part of the Standard Template Library (STL) that 
    // allows you to efficiently insert and remove elements from both ends of the container.
    deque<int> w;

    // Insert elements at the back
    w.push_back(10);
    w.push_back(20);

    // Insert elements at the front
    w.push_front(5);
    w.push_front(15);

    // Display elements
    cout << "Elements of deque: ";
    for (int num : w) {
        cout << num << " ";
    }
    cout<<endl;

    // Access elements
    cout<<"Second element: "<<w[1]<<endl;

    // Remove elements from the front and back
    w.pop_front(); // Removes '15'
    w.pop_back();  // Removes '20'

    // Display elements after removals
    cout << "Elements of deque after removals: ";
    for (int num : w) {
        cout << num << " ";
    }
    cout<<endl;

    // Practise Question:: https://leetcode.com/problems/sliding-window-maximum/description/
}

void explainSets() {
	cout<<"\nSet"<<endl;
	set<int>st;
	st.insert(1);
	st.insert(2);
	st.insert(1);

	cout<<"Count of 1 in set:: "<<st.count(1)<<endl;
	// sets are sorted and always store unique elements
}

void explainMultiSets() {
	// sets which are sorted and stores duplicate as well
	// It internally uses Red Black Tree (self balanced binary search tree)
	// complexity to serach, insert, delete is O(logn)
 	multiset<int> w;

	 
	 // Insert elements
    	w.insert(10);
    	w.insert(5);
    	w.insert(15);
	w.insert(10); // Duplicate element

	// Display elements
	cout << "Elements of multiset: ";
        for (int num : w) {
	  cout << num << " ";
        }
        cout<<endl;

        // Count of a specific element
        int count = w.count(10);
        cout << "Number of elements with value 10: " << count << std::endl;

	// Erasing an element
	
	w.erase(*w.find(10)) // this will just erase the first occurance of 10

	int count = w.count(10);
	cout << "Number of elements with value 10: " << count << endl;

	w.erase(10); // Erases all instances of '10'

	cout<<"Max Element"<<w.rbegin() // return the maximum element as the rightmost element is the maximum element

        // Display elements after erasure
        cout << "Elements of multiset after erasing 10: ";
        for (int num : w) {
	  cout << num << " ";
        }
        cout << endl;
}

void explainUnorderedSets() {
	// sets which store unique elements but in sorted order
}


// Refer for difference in maps vs unordered maps https://www.geeksforgeeks.org/map-vs-unordered_map-c/ 

// Use std::unordered_map when 
// You need to keep count of some data (Example – strings) and no ordering is required.
// You need single element access i.e. no traversal.
void explainUnorderedMaps() {
  cout<<"\nUnordered Maps"<<endl;
  
  // an unordered_map is like a data structure of dictionary type with a key and value associated to it
  // Declaring umap to be of 
  // <string, int> type key 
  // will be of STRING type 
  // and mapped VALUE will
  // be of int type
  unordered_map<string, int> umap;
  
  // inserting values by using [] operator
  umap["comment"] = 10;
  umap["views"] = 20;
  umap["likes"] = 30;
  
  // Traversing an unordered map
  for (auto x : umap)
    cout << x.first << " " << 
            x.second << endl;

  cout<<endl;
}

// Algorithms

void allAlgorithms() {
	cout<<"Popular Algo C++ STL"<<endl;;

	vector<int> vect{10,6,9,2,3};

	sort(vect.begin(), vect.end());

	// sorted array
	for (auto itr : vect) {
		cout<<itr<<" ";
	}
	cout<<endl;

	// sort function to sort in decreasing order
	sort(vect.begin(), vect.end(), greater<int>());

	// sorted array in decreasing order
	for (auto itr : vect) {
		cout<<itr<<" ";
	}
	cout<<endl;


	// sort according to custom comparator function 
	// suppose you have pair<int,int> and want them sorted in increasing order of second element
	// but if second element of pairs are same then sort them in decreasing order of first element


	// Count the number of set bits a number
        __builtin_popcount(n);  // returns the total number of set bits in an interger n

	// next and previious permutation of the given number of an array
        int arr[] = { 1, 2, 3 };
 
    	sort(arr, arr + 3);
 
    	cout << "The 3! possible permutations with 3 elements:\n";
        do {
	  cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
        } while (next_permutation(arr, arr + 3));

	cout << "After loop: " << arr[0] << ' ' << arr[1] << ' ' << arr[2] << '\n';

	sort(arr, arr + 3);
	reverse(arr, arr + 3);
	 
	cout << "The 3! possible permutations with 3 elements:\n";
	do {
	  cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
	} while (prev_permutation(arr, arr + 3));
	 
	cout << "After loop: " << arr[0] << ' ' << arr[1] << ' ' << arr[2] << '\n';

}

bool comp(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second >= p2.second) {
		if (p1.second == p2.second) {
			return p1.first > p2.first;
		}
		return true;
	} 
	return false;
}





int main(){
	explainPair();
	explainVector();
	explianPriorityQueue();
	explainDeque();
	explainList();
	explainStack();
	explainMultiSets();
	explainUnorderedMaps();
	allAlgorithms();
	return 0;
}
