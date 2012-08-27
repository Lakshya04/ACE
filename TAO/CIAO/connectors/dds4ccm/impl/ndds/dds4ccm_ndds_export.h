// -*- C++ -*-
// $Id: dds4ccm_ndds_export.h 92453 2010-11-01 11:11:09Z msmit $
// Definition for Win32 Export directives.
// ------------------------------
#ifndef DDS4CCM_DDS_NDDS_EXPORT_H
#define DDS4CCM_DDS_NDDS_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (DDS4CCM_NDDS_HAS_DLL)
#  define DDS4CCM_NDDS_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && DDS4CCM_NDDS_HAS_DLL */

#if !defined (DDS4CCM_NDDS_HAS_DLL)
#  define DDS4CCM_NDDS_HAS_DLL 1
#endif /* ! DDS4CCM_NDDS_HAS_DLL */

#if defined (DDS4CCM_NDDS_HAS_DLL) && (DDS4CCM_NDDS_HAS_DLL == 1)
#  if defined (DDS4CCM_DDS_NDDS_BUILD_DLL)
#    define DDS4CCM_NDDS_Export ACE_Proper_Export_Flag
#    define DDS4CCM_NDDS_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define DDS4CCM_DDS_NDDS_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* DDS4CCM_DDS_NDDS_BUILD_DLL */
#    define DDS4CCM_NDDS_Export ACE_Proper_Import_Flag
#    define DDS4CCM_NDDS_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define DDS4CCM_DDS_NDDS_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* DDS4CCM_DDS_NDDS_BUILD_DLL */
#else /* DDS4CCM_NDDS_HAS_DLL == 1 */
#  define DDS4CCM_NDDS_Export
#  define DDS4CCM_NDDS_SINGLETON_DECLARATION(T)
#  define DDS4CCM_DDS_NDDS_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* DDS4CCM_NDDS_HAS_DLL == 1 */

#endif /* DDS4CCM_DDS_NDDS_EXPORT_H */

// End of auto generated file.