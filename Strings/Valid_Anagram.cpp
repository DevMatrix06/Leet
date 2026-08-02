bool isAnagram(string s, string t) {

  if (t.length()!=s.length()){
  return false;}                           //unequal lengths cant be anagram
  int freq[26]={0};                    //initialise everything to 0
  for(char c:t)
	  freq[c-'a']++;          //on finding a letter make the array index=1
  for(char c:s)
	  freq[c-'a']--;          //on finding a letter in array make it 0 back again (anagram
  for(int i=0;i<26;i++){
	  if(freq[i]!=0)          //if all array elements are 0 again they are anagrams
		  return false;}
  
  return true;
