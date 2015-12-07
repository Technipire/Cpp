% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			todaysItinerary = MultipleJourney('Today''s itinerary');
		
				work = MultipleJourney('Work');
				work.addJourney(SingleJourney('Apple Computer'));
		
			todaysItinerary.addJourney(work);
		
				foodShopping = MultipleJourney('Food shopping');
				foodShopping.addJourney(SingleJourney('Whole Foods'));
				foodShopping.addJourney(SingleJourney('Stop & Shop'));
		
			todaysItinerary.addJourney(foodShopping);
		
				petShopping = MultipleJourney('Pet shopping');
				petShopping.addJourney(SingleJourney('Petco'));
				petShopping.addJourney(SingleJourney('Stop & Shop'));
		
			todaysItinerary.addJourney(petShopping);

			result = todaysItinerary;
		end
	end
end
