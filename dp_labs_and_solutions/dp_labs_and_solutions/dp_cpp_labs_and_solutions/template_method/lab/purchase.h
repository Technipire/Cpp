// purchase.h

#ifndef purchase_header
#define purchase_header

class purchase
{
public:
	void perform();
protected:
	virtual void pay() = 0;
private:
	void select_item();
	void bring_item_to_register();
};

#endif
