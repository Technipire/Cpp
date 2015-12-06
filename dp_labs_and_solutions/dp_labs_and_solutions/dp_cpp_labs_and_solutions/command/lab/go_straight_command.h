#ifndef GO_STRAIGHT_COMMAND__H__
#define GO_STRAIGHT_COMMAND__H__

class go_straight_command
{
public:
	go_straight_command(driver* a_driver, int a_how_far);
	void execute();
	void undo();
private:
	void set_how_far(int a_how_far);
	int get_how_far();
	
	int my_how_far;
};

#endif