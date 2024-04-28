int a = 5;
int b = 8;
int main() {

    int result;
    int temp;
    // Perform multiplication
    result = a * b;
    temp = result + a;

    // Use the result in a way that prevents optimization
    if(result < temp) {
        return -1;
    } else {
        return 0;
    }
}

