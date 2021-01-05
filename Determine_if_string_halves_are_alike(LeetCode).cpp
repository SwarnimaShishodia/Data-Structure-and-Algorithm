class Solution {
public:
    bool halvesAreAlike(string s) {
        int i=0,j=s.size()-1,count=0;
        while(i<j)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' or s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' or s[i]=='o' || s[i]=='u')
                count+=1;
            if(s[j]=='A' || s[j]=='E' || s[j]=='I' or s[j]=='O' || s[j]=='U' || s[j]=='a' || s[j]=='e' || s[j]=='i' or s[j]=='o' || s[j]=='u' )
                count-=1;
            i+=1;
            j-=1;
        }
        cout<<count;
        if(count)
            return false;
        return true;
    }
};
