// C++ program to illustrate the 
// unordered_set::find() function 

#include <iostream> 
#include <string> 
#include <unordered_set> 

using namespace std; 

int main() 
{ 

	unordered_set<string> sampleSet = { "geeks", "for", "geeks2" }; 

	// use of find() function 
	if (sampleSet.find("geeks1") != sampleSet.end()) {   // agar charactor find hota hain to ye wo  itrerator ka value bata dega   
		cout << "element found." << endl; 
	} 
	else { 
		cout << "element not found" << endl; 
	} 
   for (auto i: sampleSet)
   {
   	cout<< i<< " ";
   }
	return 0; 
} 


// unordered_set find() function in C++ STL
// The unordered_set::find() function is a built-in function in C++ STL which is used to search for an element in the container. 
//It returns an iterator to the element, if found else, it returns an iterator pointing to unordered_set::end().

// Syntax :

// unordered_set_name.find(key)
// Parameter: This function accepts a mandatory parameter key which specifies the element to be searched for.

// Return Value: It returns an iterator to the element if found, else returns an iterator pointing to the end of unordered_set.

// Below programs illustrate the unordered_set::find() function: