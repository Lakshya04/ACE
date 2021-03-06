// $Id: server_main.cpp 79317 2007-08-11 17:28:39Z sowayaa $
#include "ServerApp.h"
#include "ace/Log_Msg.h"
#include "tao/Exception.h"


int
ACE_TMAIN(int argc, ACE_TCHAR *argv[])
{
  ACE_LOG_MSG->priority_mask(LM_TRACE     |
                             LM_DEBUG     |
                             LM_INFO      |
                             LM_NOTICE    |
                             LM_WARNING   |
                             LM_ERROR     |
                             LM_CRITICAL  |
                             LM_ALERT     |
                             LM_EMERGENCY,
                             ACE_Log_Msg::PROCESS);

  ServerApp app;

  try
  {
    int ret = app.run(argc,argv);
    return ret == 1 ? 0 : ret;
  }
  catch (const CORBA::Exception& ex)
  {
     ex._tao_print_exception ("Caught exception in main() for ServerApp");
  }
  catch (...)
  {
    ACE_ERROR((LM_ERROR,
               "(%P|%t) Unknown (...) exception caught in main() "
               "for ServerApp\n"));
  }

  return 1;
}
