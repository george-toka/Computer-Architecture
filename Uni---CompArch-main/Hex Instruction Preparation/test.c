int main() {
    int a = 3;
    int b = 2;
    int c = 0;
    int result;

    // Perform multiplication
    for (int i=0; i<5; i++){
        a = a*b;
        c = a+b;
    }
    result = a + c;
    if(result < 5) {
        return -1;
    } else {
        return 0;
    }
}
