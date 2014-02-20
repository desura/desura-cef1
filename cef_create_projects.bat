
call svn co https://src.chromium.org/chrome/trunk/deps/third_party/nss@94921 ../third_party/nss
call svn co https://src.chromium.org/chrome/trunk/deps/third_party/yasm/binaries@74228 ../third_party/yasm/binaries
call svn co https://rlz.googlecode.com/svn/trunk@47 ../rlz
call svn co http://src.chromium.org/native_client/trunk/src/native_client/tests@6668 ../native_client/tests
call svn co https://src.chromium.org/chrome/trunk/deps/third_party/cygwin@66844 ../third_party/cygwin
call svn co https://src.chromium.org/chrome/trunk/deps/third_party/ffmpeg/binaries/win@99115 ../third_party/ffmpeg/binaries/chromium/win/ia32
 
python.exe tools\gclient_hook.py
