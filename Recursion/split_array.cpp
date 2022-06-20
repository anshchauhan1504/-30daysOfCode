// Given an integer array A of size N, check if the input array can be splitted in two parts such that -
// - Sum of both parts is equal
// - All elements in the input, which are divisible by 5 should be in same group.
// - All elements in the input, which are divisible by 3 (but not divisible by 5) should be in other group.
// - Elements which are neither divisible by 5 nor by 3, can be put in any group.
// Groups can be made with any set of elements, i.e. elements need not to be continuous. And you need to consider each and every element of input array in some group.
// Return true, if array can be split according to the above rules, else return false.
#include<bits/stdc++.h>
using namespace std;
bool check(int input[], int size, int si, int ls, int rs){
	if(si == size){
       return ls == rs;
    }    
    if(input[si] % 5 == 0){
        return check(input, size, si+1, ls+input[si], rs);
    }
    else if(input[si] % 3 == 0){
        return check(input, size, si+1, ls, rs+input[si]);
    }
    else{
        bool leftAns = check(input, size, si+1, ls+input[si], rs);
        bool rightAns = check(input, size, si+1, ls, rs+input[si]);
		return leftAns || rightAns;
    }
}

bool splitArray(int *input, int size) {
    return check(input, size, 0, 0, 0);    
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

	
	return 0;
return 0;
}