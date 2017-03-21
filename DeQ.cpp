#include<iostream>
#include<deque>
#include<stack>
#include<vector>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main() {
	
	deque<int> q;
	stack<int> min, max;
	int n=150,i;
	int e[n];
	srand(unsigned (time(0)));
	
	for(int i=0;i<n;i++)
	{
		e[i] = rand()%20;
		
	}
	
	for(i=0; i<n; i++) {
		if(q.empty()) {
			q.push_front(e[i]);
		} else {
			
			if(e[i] <= q.front() && min.empty()) {						
				q.push_front(e[i]);
			} else if(e[i] < q.front() && min.top() > e[i]) {			
				
				while( !min.empty()&&min.top() > e[i] ) {
					q.push_front(min.top());
					min.pop();
				}
				min.push(e[i]);
			} else if(e[i] < q.front() && min.top() <= e[i]) {
				min.push(e[i]);
			
			} else if(e[i] >= q.back() && max.empty()) {
				
				q.push_back(e[i]);
			} else if (e[i] > q.back() && max.top() < e[i]) {
				
				while(!max.empty()&&max.top() < e[i]) {
					q.push_back(max.top());
					max.pop();
				}
				max.push(e[i]);
			} else if (e[i] > q.back() && max.top() >= e[i]) {
				max.push(e[i]);
			}
			
			else if(e[i] > q.front() && e[i] < q.back()) {    
				while(e[i] > q.front() && e[i] < q.back()) {

					min.push(q.front());
					q.pop_front();
				
					max.push(q.back());
					q.pop_back();
				}
				if(q.empty()) {
					q.push_front(e[i]);
				} else {
					if(e[i] <= q.front()) {
						q.push_front(e[i]);
					} else {
						q.push_back(e[i]);
					}
				}
				
			} 
			
		}
	}
	
	while(!min.empty()) {
		q.push_front(min.top());
		min.pop();
	}
	while(!max.empty()) {
		q.push_back(max.top());
		max.pop();
	}
	int x = q.front();
	while(!q.empty()) {
		cout<<q.front()<<" ";
		q.pop_front();
	}
	return 0;
}
