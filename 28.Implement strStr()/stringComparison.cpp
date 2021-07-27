class Solution {
public:
int strStr(string haystack, string needle) {
if(needle=="")
return 0;

	int ans;
	bool found= false;
	for ( int i=0;i<haystack.length();i++)
	{
        if(haystack[i]==needle[0] and haystack.length()-i>=needle.length() and haystack[i+needle.length()-1]==needle[needle.length()-1])
        {
		string str = haystack.substr(i, needle.length() );
		if (str == needle)
		{
			ans = i;
			found = true;
			break;
		}
        }   
	}
	if (found == true)
		return ans;
    return -1;
}
};