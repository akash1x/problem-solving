    string intToRoman(int num) {
     string res="";  
     vector<pair<string,int>> ref={{"I",1},{"IV",4},{"V",5},{"IX",9},{"X",10},{"XL",40},{"L",50},{"XC",90},{"C",100},{"CD",400},{"D",500},{"CM",900},{"M",1000}};
     
     int x=num;   
         for(int i=ref.size()-1;i>=0;i--){
             if(x/ref[i].second>0){
              
             int times =x/ref[i].second;
                 while(times--){
                     res+=ref[i].first;
                 }
             x=x%ref[i].second;   
             }
         }
        
        return res;
    }