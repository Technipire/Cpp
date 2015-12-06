% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			todaysItinerary = MultipleJourney('Today''s itinerary');
		
				work = MultipleJourney('Work');
				work.addJourney(SingleJourneyFlyweightFactory.getInstance.getFlyweightFor('Apple Computer'));
		
			todaysItinerary.addJourney(work);
		
				foodShopping = MultipleJourney('Food shopping');
				foodShopping.addJourney(SingleJourneyFlyweightFactory.getInstance.getFlyweightFor('Whole Foods'));
				foodShopping.addJourney(SingleJourneyFlyweightFactory.getInstance.getFlyweightFor('Stop & Shop'));
		
			todaysItinerary.addJourney(foodShopping);
		
				petShopping = MultipleJourney('Pet shopping');
				petShopping.addJourney(SingleJourneyFlyweightFactory.getInstance.getFlyweightFor('Petco'));
				petShopping.addJourney(SingleJourneyFlyweightFactory.getInstance.getFlyweightFor('Stop & Shop'));
		
			todaysItinerary.addJourney(petShopping);

			result = todaysItinerary;
		end
	end
end
