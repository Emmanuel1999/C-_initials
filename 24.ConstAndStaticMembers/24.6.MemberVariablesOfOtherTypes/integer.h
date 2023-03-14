#ifndef INTEGER_H
#define INTEGER_H

class Integer
{
    private:
    int inner_int{0};

    public:
    explicit Integer(int value);
    Integer() = default;
    ~Integer();

    int get_value() const {
        return inner_int;
    }

    void set_value(int new_val) {
        inner_int = new_val;
    }

};

#endif //INTEGER_H
