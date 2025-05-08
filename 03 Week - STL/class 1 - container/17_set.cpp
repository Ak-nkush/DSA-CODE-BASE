#include<iostream>
#include<set>
using namespace std ; 

int main(){
    set<int> st ; 
    st.insert(19) ; 
    st.insert(1) ; 
    st.insert(11) ; 
    st.insert(10) ;

    set<int>::iterator it = st.begin() ; 
    while(it!=st.end()){
        cout<< *it << " "  ; 
        it++ ; 
    }cout << endl ; 
    cout << "Size : " << st.size() <<endl ; 
    st.clear() ; 
    cout << "Size : " << st.size() <<endl ; 

    if(st.empty() == true){
        cout << " set is empty " << endl ; 
    }
    else{
        cout << " set is not  empty " << endl ; 
        
    }
}