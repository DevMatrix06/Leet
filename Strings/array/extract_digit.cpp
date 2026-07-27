 //Extracting digits and pushing it into a vector is best method
 vector<int> nums;
        while(n>0){
            nums.push_back(n%10);
            n=n/10;
        }
        234:
        [4]
        23:
        [4,3]
        2:
        [4,3,2]
        