/*
template< class K , class T,class Hash = hash<K>,
classPred = equal_to<K>,
classAlloc = allocator< pair<constK,T>>
>classunordered_map;

The parameters are:

K, which is the key type.
T, which is then mapped value type
Hash, a type of unary function object that gets an object of key type as a parameter and returns a specific value of size t.
Pred, this is a binary predicate.
Alloc, which is the type of object of the allocator.
T may be replaced by any data type containing a user-defined type.

How unordered_map function work in C++?
In unordered_map, the elements are not sorted initially based on any particular order with respect to key values or mapped values. Instead, it is but structured into buckets subject to the hash values to permit fast access to distinct items directly by their values of keys.

Moreover, the containers of the unordered maps are faster than the containers of the map to access distinct elements based on their key, even though they are usually less efficient for iteration based on range through their elements subset.

These unordered maps implement the operator [], also known as a direct access operator that permits the mapped value direct access using its key value.

unordered_map<char, int>mp = {
{'H', 21} ,
{'I', 52} ,
{'J', 36} ,
{'K', 47} ,
{'L', 54}
};
auto itr = mp.find('L');
*/

//Example #1
//C++ program to find a particular element in an unordered map.
-------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <unordered_map>
//use the namespace as std
using namespace std;
//code for unordered_map begins here
int main(void)
{
//define the unordered_map
unordered_map<char, int>mp = {
{'H', 21} ,
{'I', 52} ,
{'J', 36} ,
{'K', 47} ,
{'L', 54}
};
//Iterator itr
auto itr = mp.find('L');
//print the iterator than links to the character 'L'
cout<< "Iterator links to " <<itr->first
<<" is " <<itr->second <<endl;
return 0;
}
/*First, use the namespace as std. Then, define the unordered_map with elements {‘H’, 21} ,{‘I’, 52} , {‘J’, 36} , {‘K’, 47} , 
{‘L’, 54. Once the elements are defined, use the iterator to find the element L and key that is linked to that particular character. 
On executing the code, the value linked to L will be printed.
*/


//Example #2
//C++ program to print all the elements in an unordered map.
-----------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iterator>
#include <unordered_map>
//use the namespace as std
using namespace std;
//code for unordered_map begins here
int main()
{
unordered_map<int, char> mp1;
unordered_map<int, char>::iterator crs;
mp1[1] = 'a';
mp1[2] = 'b';
mp1[3] = 'c';
mp1[4] = 'd';
mp1[5] = 'e';
mp1[6] = 'f';
mp1[7] = 'g';
mp1[8] = 'h';
cout<< "Key value\t corresponding element" <<endl;
for (crs = mp1.begin(); crs != mp1.end(); crs++)
{
cout<<crs->first;
cout<< '\t' <<crs->second << '\n'
<<endl;
}
}


