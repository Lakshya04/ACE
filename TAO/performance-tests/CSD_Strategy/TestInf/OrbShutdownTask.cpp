// This may look like C, but it's really -*- C++ -*-

//=============================================================================
/**
 *  @file    OrbShutdownTask.cpp
 *
 *  $Id: OrbShutdownTask.cpp 78641 2007-06-29 01:14:09Z sowayaa $
 *
 *  @author  Tim Bradley <bradley_t@ociweb.com>
 */
//=============================================================================

#include "OrbShutdownTask.h"
#include "ace/CORBA_macros.h"
#include "ace/OS_NS_unistd.h"


OrbShutdownTask::OrbShutdownTask()
{
}


OrbShutdownTask::~OrbShutdownTask()
{
}


void
OrbShutdownTask::orb(CORBA::ORB_ptr orb)
{
  this->orb_ = CORBA::ORB::_duplicate(orb);
}


int
OrbShutdownTask::open(void*)
{
  if (this->activate(THR_NEW_LWP | THR_JOINABLE, 1) != 0)
    {
      //FUZZ: disable check_for_lack_ACE_OS
      // Assumes that when activate returns non-zero return code that
      // no threads were activated.
      ACE_ERROR_RETURN((LM_ERROR,
                        "(%P|%t) OrbShutdownTask failed to open().\n"),
                       -1);
      //FUZZ: enable check_for_lack_ACE_OS
    }

  return 0;
}


int
OrbShutdownTask::svc()
{
  try
  {
    this->orb_->shutdown(0);
  }
  catch (...)
  {
    ACE_ERROR((LM_ERROR,
      "(%P|%t) Exception raised by ORB::shutdown() call "
      "in OrbShutdownTask::svc().\n"));
  }

  return 0;
}


int
OrbShutdownTask::close(u_long)
{
  return 0;
}
