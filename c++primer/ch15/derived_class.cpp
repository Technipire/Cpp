#include<iostream>

using namespace std;

class Quote {
    public:
        Quote() = default;
        Quote(const string &book, double sales_price):
            bookNo(book), price(sales_price){}
        string isbn() const { return bookNo; }
        virtual double net_price(size_t n) const {
            cout << "In Quote class!" << endl;
            return n * price;
        }
        virtual void debug () const {
            cout << "In Quote class!" << endl;
            cout << "bookNo: " << bookNo << endl;
            cout << "price: " << price << endl;
        }
        virtual void print() const { cout << "This is Quote." << endl; }
    private:
        string bookNo = "987";
    protected:
        double price = 5.0;
};


class Bulk_quote : public Quote {
    public:
        Bulk_quote() = default;
        Bulk_quote(const string& book, double p, size_t qty, double disc):
            Quote(book, p), min_qty(qty), discount(disc){};
        double net_price(size_t) const override;
        double get_discount() { return discount; }
        void debug () const override;
        void print() const override;
    private:
        size_t min_qty = 0;
        double discount = 0.3;

};


void Bulk_quote::debug () const {
    cout << "In Bulk_quote class!" << endl;
    Quote::debug();
    cout << "min_qty: " << min_qty << endl;
    cout << "discount: " << discount << endl;
}
double Bulk_quote::net_price(size_t cnt) const{
    cout << "In Bulk_quote class!" << endl;
    if (cnt >= min_qty)
        return cnt * (1 - discount) * price;
    else
        return cnt * price;
}
void Bulk_quote::print() const {
    cout << "This is Bulk_quote." << endl;
}
class Limited_quote : public Quote {
    public:
        Limited_quote() = default;
        Limited_quote(const string& book, double p, size_t qty, size_t limit, double disc):
            Quote(book, p), min_qty(qty), limit(limit), discount(disc) {};
        double net_price(size_t) const override;
        void debug () const override;
        void print() const override;
    private:
        size_t min_qty = 0;
        size_t limit = 5;
        double discount = 0.5;
};

double Limited_quote::net_price(size_t n) const{
    cout << "In Limited_quote class!" << endl;
    if (n >= min_qty && n <= limit)
        return n * (1 - discount) * price;
    else if (n > limit)
        return limit * (1 - discount) * price + price * (n - limit);
    else
        return n * price;
    
}

void Limited_quote::debug () const {
    cout << "In Limited_quote class!" << endl;
    Quote::debug();
    cout << "min_qty: " << min_qty << endl;
    cout << "discount: " << discount << endl;
    cout << "limit: " << limit << endl;
}

void Limited_quote::print () const {
    cout << "This is Limited_quote." << endl;
}

void print_total(ostream &os, const Quote &item, size_t n){
    double ret = item.net_price(n);
    os << "ISBN " << item.isbn() << " # sold: " << n
        << " total due: " << ret << endl;
}

void display_debug(const Quote &item){
    item.debug();
}
int main(){
    Quote item;
    Bulk_quote bulk;
    Quote *p = &item;
    p = &bulk;
    Limited_quote *lp = new Limited_quote();
    print_total(cout, item, 3);
    print_total(cout, bulk, 3);
    print_total(cout,*p, 3);
    print_total(cout,*lp, 7);

    display_debug(item);
    display_debug(bulk);
    display_debug(*p);
    display_debug(*lp);
    cout << endl;
    //Exercise 15.14
    Quote bobj;
    Bulk_quote dobj;
    Quote *bp1 = &bobj;
    Quote *bp2 = &dobj;
    Quote &br1 = bobj;
    Quote &br2 = dobj;

    bobj.print();
    dobj.print();
    bp1->print();// runtime
    bp2->print();// runtime
    br1.print();// runtime
    br2.print();// runtime
    Quote &r = bulk;
    return 0;
}
