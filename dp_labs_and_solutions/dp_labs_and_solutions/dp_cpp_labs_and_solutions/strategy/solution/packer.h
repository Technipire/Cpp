// packer.h

#ifndef packer_header
#define packer_header

class packing_strategy;

class packer
{
public:
	packer(packing_strategy * a_strategy);

	void pack();

	void set_strategy(packing_strategy * a_strategy);
	packing_strategy * get_strategy() const;

private:
	packing_strategy * my_strategy;
};

#endif
