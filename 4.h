class Square {
public:
    Square(double x, double y, double side);
    void move(double dx, double dy);
    double getX() const;
    double getY() const;
private:
    double x_;
    double y_;
    double side_;
};