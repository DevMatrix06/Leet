vector<int> index;
        while(i<nums.size()){
            for(int j=i+1;j<nums.size();j++)
                if((nums[i]+nums[j])==target&&i!=j)
                   { index.push_back(i);
                    index.push_back(j);}
            i++;

        }
        