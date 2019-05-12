int adjacentElementsProduct(std::vector<int> inputArray) {
    int max=inputArray[0]*inputArray[1];
    for(int i=2; i<inputArray.size(); i++){
        if(inputArray[i]*inputArray[i-1]>max)
            max = inputArray[i]*inputArray[i-1];
    }
    return max;
}
