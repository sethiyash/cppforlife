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
	cout<<"vector explained"<<endl;
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
	cout<<"Lists"<<endl;
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
	cout<<"Stack"<<endl;
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
	cout<<"Prority Queue"<<endl;

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

void explainSets() {
	cout<<"Set"<<endl;
	set<int>st;
	st.insert(1);
	st.insert(2);
	st.insert(1);

	cout<<"Count of 1 in set:: "<<st.count(1)<<endl;
	// sets are sorted and always store unique elements
}

void explainMultiSets() {
	// sets which are sorted but not unique will store multiple occurances of same element
}

void explainUnorderedSets() {
	// sets which store unique elements but in sorted order
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

}

bool comp(pair<int, int> p1, pair<int, int> p2) {
	if p1.second >= p2.second {
		if p1.second == p2.second {
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
	explainList();
	explainStack();
	allAlgorithms();
	return 0;
}