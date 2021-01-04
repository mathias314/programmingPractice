#define CATCH_CONFIG_MAIN

#include "../../../../catch.hpp"
#include "../../reverse.h"
#include <sstream>

TEST_CASE( "reverse" )
{
    ostringstream sout;
    sout.str( "" );

    linkedList l;

    l.insert( 5 );
    l.insert( 10 );

    l.itReverse();

    l.print( sout );

    REQUIRE( sout.str() == "10, 5" );
}

/* int main()
{
    return 0;
} */