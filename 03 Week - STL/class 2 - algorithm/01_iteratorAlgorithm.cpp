#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ; 

void printDouble(int a ){
    cout << (2*a) << " " ; 
}
int findEven(int a ){
    return a%2==0 ;
}

int main(){

    // vector<int> arr(5) ; 
    // if the size has being given to the vector at the first thats its size and capacity and then we tried to insert the element soo the first become 10 , double of the initial size . soo the first five element will we 0 and then 10,20,30,40,50 

     vector<int> arr ; 
     arr.push_back(10) ;     
     arr.push_back(13) ;     
     arr.push_back(11) ;     
     arr.push_back(24) ;     
     arr.push_back(12) ;

     for_each(arr.begin(),arr.end(),printDouble) ;  
     cout << endl ; 

     int target = 40 ; 
     auto it = find(arr.begin() , arr.end(),target) ; 
     cout << "Target from find() is "<< *it << endl; 

    auto it1 =  find_if(arr.begin(),arr.end(),findEven) ; 
    cout<<"First even number is : " << *it1 << endl ; 

    auto it2 = count(arr.begin() , arr.end() , 22) ; 
    cout << "Count of the target is : " << it2 << endl ; 

   auto it3 =  count_if(arr.begin() , arr.end(),findEven) ;
   cout << "Count of the even number in the vector : " << it3  << endl ;  

   sort(arr.begin(),arr.end()) ;
   cout << "sorted vector : " ;    
   for( int a : arr){
    cout << a << " " ; 
   }cout << endl ; 

//    reverse(arr.begin() , arr.end()) ;
//    cout << "Reversd sorted vector : " ;  
//    for(int a : arr){
//     cout << a << " " ; 

//    } cout << endl ; 

rotate(arr.begin(), arr.begin()+3, arr.end()) ;
cout << "Rotated vector : " ; 
for(int a : arr){
    cout << a << " " ; 
}cout << endl ;

auto it4 = unique(arr.begin() , arr.end()) ; 
arr.erase(it4 , arr.end()) ; 
for(int a : arr){
    cout << a << " " ; 
 }cout << endl ; 

auto it5  = partition(arr.begin(),arr.end(),findEven) ; 
for(int a : arr) {
    cout << a << " " ; 
}

}


