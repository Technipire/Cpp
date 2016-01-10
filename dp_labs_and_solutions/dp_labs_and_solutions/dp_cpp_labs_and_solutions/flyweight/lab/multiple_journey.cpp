#include <iostream>

#include "multiple_journey.h"
#include "single_journey.h"
#include <typeinfo>
multiple_journey::multiple_journey(const std::string& a_name)
{
    if (a_name.empty()) 
    {
        dp_exception("a_name is empty!");
    }
    my_name = a_name;
}

void multiple_journey::output(std::ostream& a_ostream) const
{
    a_ostream << "a multiple journey to " << my_name << ".\n";
//    dp_const_iterator<journey* >* journey_iter = get_journeys();
    auto journey_iter = get_journeys();
    std::cout << typeid(journey_iter).name() << std::endl;
    while (!journey_iter->is_done())
    {
        journey* a_journey = journey_iter->get_current();
        if (a_journey == nullptr)
        {
            dp_exception("a_journey is null!");
        }
        a_journey->output(a_ostream);
        journey_iter->advance();
    }
}

void multiple_journey::add_journey(journey* a_journey)
{
    if (!a_journey)
    {
        dp_exception("a_journey is null!");
    }
    my_journeys.add(a_journey);
}


dp_iterator<journey* >* multiple_journey::get_journeys()
{
    return my_journeys.make_iterator();
}

dp_const_iterator<journey* >* multiple_journey::get_journeys() const
{
    return my_journeys.make_iterator();
}
