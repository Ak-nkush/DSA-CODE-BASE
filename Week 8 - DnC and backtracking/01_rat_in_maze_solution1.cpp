class Solution {
  public:
    bool isSafe(int newx,int newy,vector<vector<int>> &mat,vector<vector<bool>>&visited,int n){
        // now we have to check wheather the new postion for the rat to move is safe or not 
        if(newx<0 || newx>=n || newy<0 || newy>=n){
            return false ; 
        }    
        if(mat[newx][newy]==0 || visited[newx][newy]== true ){
            return false ; 
        }
        return true ; 
    }
    void solve(vector<vector<int>> &mat,vector<vector<bool>>&visited,int scrx,int scry,int destx , int desty , string output , vector<string>&ans , int n ){
        // base case => when we reached the destination i.e n -1 , n -1 
        if(scrx==destx && scry==desty){
            ans.push_back(output) ;    
            return ; 
        }
        // now we have call the recrusion for the every moevment of the rat seperately 
        // we have to define every movement it means that we have to create the variables for every movement
        
        // up 
        int newx = scrx -1 ; 
        int newy = scry ; 
        if(isSafe(newx,newy,mat,visited,n)){
            // marking true means rat is safe to move on that position 
            visited[newx][newy] = true ;
            output.push_back('U') ; 
            // new values function me pass karna bhul jata hu 
            solve(mat , visited , newx,newy,destx,desty,output,ans,n) ;
            // while returning we are backtracking the changes 
            output.pop_back() ; 
            visited[newx][newy] = false ;
            // marking false means rat is going back to check the other route too 
        }
        
        // left 
          newx = scrx  ; 
         newy = scry  - 1 ; 
        if(isSafe(newx,newy,mat,visited,n)){
            visited[newx][newy] = true ; 
            output.push_back('L') ; 
            solve(mat , visited , newx ,newy,destx,desty,output,ans,n) ;
            // while returning we are backtracking the changes 
            output.pop_back() ; 
            visited[newx][newy] = false ;
        }
        
        // down  
         newx = scrx + 1  ; 
         newy = scry ; 
        if(isSafe(newx,newy,mat,visited,n)){
            visited[newx][newy] = true ; 
            output.push_back('D') ; 
            solve(mat , visited , newx ,newy,destx,desty,output,ans,n) ;
            // while returning we are backtracking the changes 
            output.pop_back() ; 
            visited[newx][newy] = false ;
        }
        
        // right 
          newx = scrx  ; 
          newy = scry +  1  ; 
        if(isSafe(newx,newy,mat,visited,n)){
            visited[newx][newy] = true ; 
            output.push_back('R') ; 
            solve(mat , visited , newx ,newy,destx,desty,output,ans,n) ;
            // while returning we are backtracking the changes 
            output.pop_back() ; 
            visited[newx][newy] = false ;
        }
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        int n = mat.size() ; 
        // first creating the boolean matrix 
        vector<vector<bool>> visited(n,vector<bool>(n,false)) ;
        string output = "" ;
        vector<string> ans ; 
        int scrx = 0 ; 
        int scry = 0 ; 
        int destx = n - 1 ; 
        int desty = n - 1 ; 
        if(mat[scrx][scry]== 0 || mat[destx][desty]==0){
            return ans ;    
        }
        visited[scrx][scry] = true ; // => ye bhul jata hu 
        solve(mat , visited , scrx ,scry,destx,desty,output,ans,n) ; 
        return ans ; 
    }
};