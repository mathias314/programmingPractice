#include <iostream>

using namespace std;

char** alloc2d( int rows, int cols );
int countHandshakes( char** arrangement, int rows, int cols );

int main()
{
    int rows, cols;
    char** arrangement;
    int handshakes = 0;
    int maxHandshakes = 0;

    cin >> rows >> cols;
    arrangement = alloc2d( rows, cols );

    for( int i = 0; i < rows; i++ )
    {
        for( int j = 0; j < cols; j++ )
        {
            cin >> arrangement[i][j];
        }
    }

    for( int i = 0; i < rows; i++ )
    {
        for( int j = 0; j < cols; j++ )
        {
            if( arrangement[i][j] == '.' )
            {
                arrangement[i][j] = 'o';
                handshakes = countHandshakes( arrangement, rows, cols );
                arrangement[i][j] = '.';

                if( handshakes > maxHandshakes )
                {
                    handshakes = maxHandshakes;
                }

            }
        }
    }

    handshakes = countHandshakes( arrangement, rows, cols );
    if( handshakes > maxHandshakes )
    {
        handshakes = maxHandshakes;
    }

    cout << maxHandshakes << endl;
}

char** alloc2d( int rows, int cols )
{
    char** arrangement = nullptr;
    arrangement = new (nothrow) char* [rows];

    if( arrangement == nullptr )
    {
        cout << "array allocation failure" << endl;
        exit( 0 );
    }

    for( int i = 0; i < rows; i++ )
    {
        arrangement[i] = new (nothrow) char[cols];
        if( arrangement[i] == nullptr )
        {
            cout << "Not enough memory to run program.";
            exit( 0 );
        }
    }

    return arrangement;
}


int countHandshakes( char** arrangement, int rows, int cols )
{
    int i, j;
    int numHandshakes = 0;
    bool offRowNeg = false;
    bool offRowPos = false;
    bool offColNeg = false;
    bool offColPos = false;

    
    for( i = 0; i < rows; i++ )
    {
        if( (i - 1) < 0 )
        {
            offRowNeg = true;
        }
        if( (i + 1) > rows )
        {
            offRowPos = true;
        }
        for( j = 0; j < cols; j++ )
        {
            if( (j - 1) < 0 )
            {
                offColNeg = true;
            }
            if( (j + 1) > cols )
            {
                offColPos = true;
            }


            if( arrangement[i][j] == 'o' )
            {
                if( offRowPos == false )
                {
                    if( arrangement[i + 1][j] == 'o' )
                    {
                        numHandshakes++;
                    }
                }

                if( offRowNeg == false )
                {
                    if( arrangement[i - 1][j] == 'o' )
                    {
                        numHandshakes++;
                    }
                }

                if( offColPos == false )
                {
                    if( arrangement[i][j + 1] == 'o' )
                    {
                        numHandshakes++;
                    }
                }

                if( offColNeg == false )
                {
                    if( arrangement[i][j - 1] == 'o' )
                    {
                        numHandshakes++;
                    }
                }

                if( offRowPos == false && offColPos == false )
                {
                    if( arrangement[i + 1][j + 1] == 'o' )
                    {
                        numHandshakes++;
                    }
                }

                if( offRowNeg == false && offColNeg == false )
                {
                    if( arrangement[i - 1][j - 1] == 'o' )
                    {
                        numHandshakes++;
                    }
                }
                
                if( offRowNeg == false && offColPos == false )
                {
                    if( arrangement[i - 1][j + 1] == 'o' )
                    {
                        numHandshakes++;
                    }
                }

                if( offRowPos == false && offColNeg == false )
                {
                    if( arrangement[i + 1][j - 1] == 'o' )
                    {
                        numHandshakes++;
                    }
                }
            }
        }
    }
    return numHandshakes;
}
