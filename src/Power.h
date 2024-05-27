class Power
{
private:
    int punch;
    int kick;

public:
    Power(int punch = 0, int kick = 0);
    ~Power();
    void show();
    int getPunch();
    int getKick();
    Power pow(Power &another);
    Power operator+(Power &another);
    bool operator==(Power &another);
    Power& operator+=(Power &another);
    Power& operator++();
    Power& operator++(int);
    Power& operator()(int power);
    Power& operator<<(int power);
};