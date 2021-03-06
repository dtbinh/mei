/*
 * Mei Cheung
 *        File: Odometry.h
 *  Created on: 
 *      Author: 
 */

#ifndef Odometry_HEADER
#define Odometry_HEADER

#include "MOOS/libMOOS/MOOSLib.h"
#include "MOOS/libMOOS/Thirdparty/AppCasting/AppCastingMOOSApp.h"
#include <math.h>

class Odometry : public AppCastingMOOSApp
{
public:
    Odometry();
    ~Odometry();

protected:
    bool OnNewMail(MOOSMSG_LIST &NewMail);
    bool Iterate();
    bool OnConnectToServer();
    bool OnStartUp();
    void RegisterVariables();
    bool  buildReport();	//Added for Appcasting

private: // Configuration variables

    bool   m_first_x;
    bool   m_first_y;
    bool   m_first_reading;
    double m_current_x;
    double m_current_y;
    double m_previous_x;
    double m_previous_y;
    double m_total_distance;

private: // State variables
    unsigned int m_iterations;
    double       m_timewarp;
};

#endif 
