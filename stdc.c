long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b; // Divide first to prevent overflow
}


int cmp_ints(const void *a, const void *b) {
    // 1. Cast and dereference
    int valA = *(const int *)a; 
    int valB = *(const int *)b;

    // 2. Apply the Golden Rule
    if (valA < valB) return -1; // valA comes first (Ascending)
    if (valA > valB) return 1;  
    return 0;
}

// Usage:
// qsort(arr, n, sizeof(int), cmp_ints);


typedef struct {
    int id;
    int score;
} Player;

int cmp_players(const void *a, const void *b) {
    Player *p1 = (Player *)a;
    Player *p2 = (Player *)b;

    // Primary sort: Score (Descending)
    if (p1->score != p2->score) {
        if (p1->score > p2->score) return -1; // p1 has higher score, put p1 first
        return 1;
    }

    // Secondary sort: ID (Ascending)
    if (p1->id < p2->id) return -1; // p1 has lower ID, put p1 first
    if (p1->id > p2->id) return 1;
    
    return 0;
}

// Usage:
// Player players[100];
// qsort(players, n, sizeof(Player), cmp_players);

// For 32-bit integers
int max(int a, int b) { return (a > b) ? a : b; }
int min(int a, int b) { return (a < b) ? a : b; }

// For 64-bit integers
long long max_ll(long long a, long long b) { return (a > b) ? a : b; }
long long min_ll(long long a, long long b) { return (a < b) ? a : b; }