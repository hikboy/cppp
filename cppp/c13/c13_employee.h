
#include <string>

class employee {
public:
    employee();
    employee(std::string &s);
    employee(const employee&);
    employee &operator=(const employee&);
    ~employee() {
        delete pname;
    }

private:
    std::string *pname;
    int id;
    static int datainc;

};

