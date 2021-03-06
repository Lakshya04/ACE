// $Id: Messenger_i.h 95052 2011-11-17 10:11:20Z mcorino $

#ifndef __MESSENGER_I_H__
#define __MESSENGER_I_H__

#include "MessengerS.h"

class Messenger_i : public POA_SimpleMessenger::Messenger
{
public:
  Messenger_i (CORBA::ORB_ptr orb);
  virtual void send (void);

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  CORBA::ORB_var orb_;
};

#endif
