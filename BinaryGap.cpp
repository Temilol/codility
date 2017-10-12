// you can use includes, for example:
#include <algorithm>
#include <string>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

string toBinary(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    bool found = false;
    int result = 0, count = 0;
    
    // cout << binaryNumber << endl;
    string nw = toBinary(N);
    
    // cout << nw << endl;
    
    for(int i = 0; i < nw.size(); i++) {
        if(nw[i] == '1'){
            if(found == false){
                found = true;
            }else{
                // cout << "___________________________________" << endl;
                // cout << "result is " << result << "count is " << count << endl;
                result = max(result, count);
                // cout << "max is " << result << endl;
            }
            count = 0;
        }else{
            count+=1;
        }
        // cout << nw[i];
    }
    
    return result;
    
}
