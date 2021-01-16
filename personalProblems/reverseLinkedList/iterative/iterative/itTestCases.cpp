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
    l.insert( 15 );
    l.insert( 20 );
    l.insert( 25 );
    l.insert( 30 );
    l.insert( 35 );

    l.itReverse();

    l.print( sout );

    REQUIRE( sout.str() == "35, 30, 25, 20, 15, 10, 5" );
}


TEST_CASE( "2 items" )
{
    stringstream sout;
    sout.str( "" );

    linkedList l2;

    l2.insert( 1 );
    l2.insert( 2 );

    l2.itReverse();

    l2.print( sout );

    REQUIRE( sout.str() == "2, 1" );
}


TEST_CASE( "1 item" )
{
    stringstream sout;
    sout.str( "" );

    linkedList l1;

    l1.insert( 5 );

    l1.itReverse();

    l1.print( sout );

    REQUIRE( sout.str() == "5" );
}

/* int main()
{
    return 0;
} */
