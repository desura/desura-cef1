desura-cef1
===========

 * Download depot tools from https://s3-us-west-2.amazonaws.com/lecs.desura.lindenlab.com/depot_tools-r1.zip
 * Extract depot_tools and ensure its added to the PATH env var
 * Download chromium from https://s3-us-west-2.amazonaws.com/lecs.desura.lindenlab.com/chromium-15.0.876.0.tar.bz2
 * Clone this repo into a folder called cef in the extracted chromium src folder
 * Should look like chromium/src/cef
 * Open command prompt to chromum/src/cef
 * Run command: cef_create_projects.bat
 * Open cef/cef.sln and build cef_desura



Output should be:
 * cef_desura.dll
 * icudt.dll
 * avcodec-53.dll
 * avformat-53.dll
 * avutil-51.dll
 * zlibwapi.dll
 * cef_resources.pak
 
