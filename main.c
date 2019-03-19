int increment(int n) { 
    n = n + 1; 
    return n; 
}

void reset_handler(void) {
    int x = 10; 
    x=increment(x);

    return 0; 
} 
