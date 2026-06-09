class Solution {
public:
    bool ispresent (int freq1[],int freq2[])
    {
        for(int i=0;i<26;i++)
        {
            if(freq1[i]!=freq2[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            int idx=s1[i]-'a';
            freq[idx]++;
        }
        int windows1=s1.length();
        for(int i=0;i<s2.length();i++)
        {
            int winds2=0,idx=i;
            int windowf[26]={0};
            while(winds2<windows1 && idx<s2.length())
            {
                windowf[s2[idx]-'a']++;
                winds2++,idx++;
            }
            if(ispresent(freq,windowf)) return true;
        }
        return false;
        
    }
};