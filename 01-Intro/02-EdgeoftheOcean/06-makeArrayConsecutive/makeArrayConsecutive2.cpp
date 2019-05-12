int makeArrayConsecutive2(std::vector<int> statues) {
    int max=statues[0];
    int min=max;
    for(int i=0; i<statues.size(); i++){
        if(statues[i]<min)
            min=statues[i];
        if(statues[i]>max)
            max=statues[i];
    }
    return max-min+1-statues.size();
}
