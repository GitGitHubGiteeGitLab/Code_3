// n = 2^a * 3^b * 5^c
bool isUgly(int n) {
    if(n <= 0){
        return false;
    }
    int factors[] = {2, 3, 5};
    int i = 0;
    while(i < 3){
        // n = 2^a * 3^b * 5^c
        //while(对) if(错) 要除干净
        while(n % factors[i] == 0){
            //a / b = 0 && a % b == 0=> a == 0
            // 1 % 2 == 1
            n /= factors[i];
        }
        ++i;
    }
    return n == 1;
}