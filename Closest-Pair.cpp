struct Point {float x, y;};
 
// Calculate the distance between two points
float dist(Point& a, Point& b) {
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}
 
void closest_pair() {
    Point point[10] = {
        {3, 3}, {1, 5}, {4, 6}, {2, 8}, {9, 9},
        {2, 1}, {7, 2}, {6, 5}, {9, 4}, {5, 9}
    };
 
    float d = 1e9; 
    for (int i=0; i<10; i++) {
        for (int j=i+1; j<10; j++) {
            // The minimum distance
            d = min(d, dist(point[i], point[j]));
         }
    }
 
    cout << "The closest distance is: " << d;
}
