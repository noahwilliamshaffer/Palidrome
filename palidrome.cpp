bool checkPalindrome(std::string x) {
    int limit = x.length();
    std::string reverse;
bool Tellme;
    for (int i = limit-1; i >= 0;i--){
     reverse+=x[i];}

    if (limit==1){
        return true;}

    for (int i =0; i < limit-1; i++){
        if (x[i]==reverse[i])
            Tellme = true;
        else
            return false;
            
    }
    
    return Tellme;
}
