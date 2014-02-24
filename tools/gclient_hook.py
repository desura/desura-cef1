# Copyright (c) 2011 The Chromium Embedded Framework Authors.
# Portions copyright (c) 2006-2008 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

import os, sys

# The CEF root directory is the parent directory of _this_ script.
cef_dir = os.path.abspath(os.path.join(os.path.dirname(__file__), os.pardir))

try:
  # depot_tools may already be in the import path.
  import gclient_utils
except ImportError, e:
  # Search the PATH environment variable to find the depot_tools folder.
  depot_tools = None;
  paths = os.environ.get('PATH').split(os.pathsep)
  for path in paths:
    if os.path.exists(os.path.join(path, 'gclient_utils.py')):
      depot_tools = path
      break

  if depot_tools is None:
    print >> sys.stderr, 'Error: could not find depot_tools in PATH.'
    sys.exit(2)

  # Add depot_tools to import path.
  sys.path.append(depot_tools)
  import gclient_utils

# Copied from gclient.py python code.
def RunAction(dir, command):
  """Runs the action."""
  if command[0] == 'python':
    # If the hook specified "python" as the first item, the action is a
    # Python script.  Run it by starting a new copy of the same
    # interpreter.
    command[0] = sys.executable

  try:
    gclient_utils.CheckCallAndFilterAndHeader(
        command, cwd=dir, always=True)
  except gclient_utils.Error, e:
    # Use a discrete exit status code of 2 to indicate that a hook action
    # failed.  Users of this script may wish to treat hook action failures
    # differently from VC failures.
    print >> sys.stderr, 'Error: %s' % str(e)
    sys.exit(2)

print "\nPatching build configuration and source files for CEF..."
patcher = [ 'python', 'tools/patcher.py', 
            '--patch-config', 'patch/patch.cfg' ];
RunAction(cef_dir, patcher);

print "\nGenerating CEF project files..."
os.environ['CEF_DIRECTORY'] = os.path.basename(cef_dir);

if sys.platform.startswith("win"):
	gyper = [ 'python', 'tools/gyp_cef', 'cef.gyp',
		'-I', 'cef.gypi',
		'-Dwerror=',
		'-Dchromium_win_pch=1',
		'-Dmsvs_multi_core_compile=1']
else:
	gyper = [ 'python', 'tools/gyp_cef', 'cef.gyp',
		'-I', 'cef.gypi',
		'-Dwerror=',
		'-Duse_cups=0',
		'-Duse_gconf=0',
		'-Duse_gnome_keyring=0',
		'-Duse_kerberos=0',
		'-Dproprietary_codecs=1',
		'-Dffmpeg_branding=Desura',
		'-Duse_system_bzip2=1',
		'-Duse_system_flac=1',
		'-Duse_system_icu=0',
		'-Duse_system_libevent=1',
		'-Duse_system_libjpeg=1',
		'-Duse_system_libpng=1',
		'-Duse_system_libwebp=0',
		'-Duse_system_libxml=1',
		'-Duse_system_speex=1',
		'-Duse_system_v8=0',
		'-Duse_system_xdg_utils=1',
		'-Duse_system_yasm=1',
		'-Duse_system_zlib=1']

RunAction(cef_dir, gyper);
