/*
 * =====================================================================================
 *
 *       Filename: dbconnection.hpp
 *        Created: 01/21/2019 22:03:34
 *    Description: 
 *
 *        Version: 1.0
 *       Revision: none
 *       Compiler: gcc
 *
 *         Author: ANHONG
 *          Email: anhonghe@gmail.com
 *   Organization: USTC
 *
 * =====================================================================================
 */

class DBConnection
{
};

class DBRecord
{
};

#if defined(MIR2X_ENABLE_SQLITE3)
    #include "dbengine_sqlite3.hpp"
#endif
