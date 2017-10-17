//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
    int n, hay[10005], mean=0, sum=0;
    int i;
    
    cin >> n;
    for(i=0;i<n;i++){
        cin >>  hay[i];
        mean+=hay[i];
    }
    mean/=n;
    
    for(i=0;i<n;i++){
        if(hay[i]<mean){
            sum+=mean-hay[i];
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
