int main() { int x = 5; int *ptr = &x; int y = *ptr; *ptr = 10; // Modifying the value pointed to by ptr. printf("%d %d", x, y); // Displays x and original value of x return 0; }