% SetupClass.m

classdef SetupClass < handle
	methods (Static)
		function result = setup
			aSingleJourneyFlyweightFactory = SingleJourneyFlyweightFactory;

			todaysItinerary = MultipleJourney('Today''s itinerary');
		
				work = MultipleJourney('Work');
				work.addJourney(aSingleJourneyFlyweightFactory.getFlyweightFor('Apple Computer'));
		
			todaysItinerary.addJourney(work);
		
				foodShopping = MultipleJourney('Food shopping');
				foodShopping.addJourney(aSingleJourneyFlyweightFactory.getFlyweightFor('Whole Foods'));
				foodShopping.addJourney(aSingleJourneyFlyweightFactory.getFlyweightFor('Stop & Shop'));
		
			todaysItinerary.addJourney(foodShopping);
		
				petShopping = MultipleJourney('Pet shopping');
				petShopping.addJourney(aSingleJourneyFlyweightFactory.getFlyweightFor('Petco'));
				petShopping.addJourney(aSingleJourneyFlyweightFactory.getFlyweightFor('Stop & Shop'));
		
			todaysItinerary.addJourney(petShopping);

			result = todaysItinerary;
		end
	end
end
