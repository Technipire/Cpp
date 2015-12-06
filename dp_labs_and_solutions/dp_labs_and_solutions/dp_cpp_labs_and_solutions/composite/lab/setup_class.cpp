// setup_class.cpp

#include <string>
#include "journey.h"
#include "multiple_journey.h"
#include "setup_class.h"
#include "single_journey.h"
#include "single_journey_flyweight_factory.h"

journey * setup_class::setup()
{
	multiple_journey * todays_itinerary = new multiple_journey("Today's itinerary");

		multiple_journey * work = new multiple_journey("Work");
		work->add_journey(single_journey_flyweight_factory::get_instance().get_flyweight_for("Apple Computer"));

	todays_itinerary->add_journey(work);

		multiple_journey * food_shopping = new multiple_journey("Food shopping");
		food_shopping->add_journey(single_journey_flyweight_factory::get_instance().get_flyweight_for("Whole Foods"));
		food_shopping->add_journey(single_journey_flyweight_factory::get_instance().get_flyweight_for("Stop & Shop"));

	todays_itinerary->add_journey(food_shopping);

		multiple_journey * pet_shopping = new multiple_journey("Pet shopping");
		pet_shopping->add_journey(single_journey_flyweight_factory::get_instance().get_flyweight_for("Petco"));
		pet_shopping->add_journey(single_journey_flyweight_factory::get_instance().get_flyweight_for("Stop & Shop"));

	todays_itinerary->add_journey(pet_shopping);
	
	return todays_itinerary;
}
